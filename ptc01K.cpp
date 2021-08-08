#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    int arr1[26], arr2[26];
    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            arr1[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (isalpha(s1[i]))
        {
            arr2[s1[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr2[i] > arr1[i])
        {
            printf("%c", i + 'a');
        }
    }
    printf("\n");
}