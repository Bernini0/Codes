#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string str;
        cin >> str;

        for (int i = 2; i < str.size()-1; i+= 2)
        {
            str[i] = '0';
        }
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]!='0'){
            printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    
}