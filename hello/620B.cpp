#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        char num1[n + 1];
        char num2[n + 1];
        getchar();
        scanf("%s", str);
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '2')
            {
                if(d!=1){
                num1[i] = '1';
                num2[i] = '1';
                }
                else
                {
                    num1[i] ='2';
                    num2[i] = '0';
                }
                
            }
            else if (str[i] == '1')
            {
                if(d==0){
                    num1[i] = '0';
                    num2[i] = '1';
                    d = 1;
                }
                else
                {
                    num1[i] = '1';
                    num2[i] = '0';
                }
                
                
            }
            else
            {
                num1[i] = '0';
                num2[i] = '0';
            }
            num1[n] ='\0';
            num2[n] = '\0';
        }
        printf("%s\n", num1);
        printf("%s\n", num2);
    }
}