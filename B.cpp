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
        char s[100000+2];
        scanf("%s",s);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                s[i] = '9';
            }
            else if (s[i] == '1')
            {
                cnt -= 4;
                s[i] = '9';
            }
            else if (s[i] == '2')
            {
                cnt -= 1;
                s[i] = '9';
            }
            else if (s[i] == '3')
            {
                cnt -= 1;
                s[i] = '9';
            }
            else if (s[i] == '4')
            {
                cnt -= 2;
                s[i] = '9';
            }
            else if (s[i] == '5')
            {
                cnt -= 1;
                s[i] = '9';
            }
            else if (s[i] == '6')
            {
                s[i] = '9';
            }
            else if (s[i] == '7')
            {
                cnt -= 3;
                s[i] = '9';
            }
            else if (s[i] == '8')
            {
                cnt += 1;
                s[i] = '9';
            }
        }
        cnt *= (-1);
        int i = n - 1;
        if (cnt < 0)
        {
            while (cnt <= -1)
            {
                s[i] = '8';
                i--;
                cnt++;
            }
            
        }
        else
        {
            // if(cnt==0){
            //     printf("%s\n",s);
            //     continue;
            // }
            if (cnt == 1)
            {
                s[i] = '5';
            }
            else if(cnt==2){
                s[i] = '4';
            }
            else if(cnt == 5){
                s[i] = '4';
                s[i-1] = '7';
            }
            else{
                int x = (cnt)/4;
                if(cnt%4==0){
                    while (cnt>0)
                    {
                        s[i] = '1';
                        i--;
                        cnt -= 4;
                    }
                }
                else if(cnt%4==1){
                    for (int j = 0; j < x-2; j++)
                    {
                        s[i] = '1';
                        i--;
                    }
                    s[i] = '7';
                    i--;
                    s[i] = '7';
                    i--;
                    s[i] = '7';
                }
                else if(cnt%4==2){
                    for (int j = 0; j < x-1; j++)
                    {
                        s[i]='1';
                        i--;
                    }
                    s[i] = '7';
                    s[i-1] = '7';
                }
                else if(cnt%4==3){
                    for(int j = 0; j < x; j++)
                    {
                        s[i] = '1';
                        i--;
                    }
                    s[i] = '7';
                }
            }
        }

        printf("%s\n",s);
    }
}