#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        string str;
        cin >> str;
        int zero = 0, one = 0, cnt = 1, on = 0,i;
        if (str[0] == '1')
        {
            cnt = 0;
            i = 1;
        }
        else
        {
            cnt = 1;
            i = 1;
        }
        for (i; i < n; i++)
        {
            if (str[i] == '0')
            {
                zero++;
                if (zero > k)
                {
                    cnt++;
                    
                    zero = 0;
                }
            }
            else if(str[i]=='1')
            {
                one++;

                if (zero < k)
                {
                    zero = 0;
                    one = 0;
                    
                    cnt--;
                }
                else if(zero==k){
                    zero=0;
                }
            }
        }

        printf("%d\n", cnt);
    }
}