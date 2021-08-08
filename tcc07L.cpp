#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i]==s[0]){
            printf("Wrong Answer\n");
            return 0;
        }
    }
    printf("Correct\n");
    return 0;
    
}