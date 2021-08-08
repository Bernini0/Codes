#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    string line1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    // string line2 = "asdfghjkl;";
    // string line3 = "zxcvbnm,./";

    scanf("%c", &c);
    getchar();
    string str;
    cin >> str;
    if (c == 'R')
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < line1.size(); j++)
            {
                if (line1[j] == str[i]){
                    str[i] = line1[j - 1];
                    printf("%c",str[i]);
                    break;
                }
            }
        }
        printf("\n");
        // cout << str << endl;
    }
    else if (c == 'L')
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < line1.size(); j++)
            {
                if (line1[j] == str[i]){
                    str[i] = line1[j + 1];
                    printf("%c",str[i]);
                    break;
                }
            }
        }
        printf("\n");
        // cout << str << endl;
    }
}