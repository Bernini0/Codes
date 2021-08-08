#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        if(a < b)printf("1\n");
        else
        {
            int ans = 2000000000;
            int cnt = 1;
            if(b==1){
                b++;
                cnt++;
            }
            for (int i = b;i < b+100000; i++)
            {
                int l = log10(a)/(log10(i));
                if(l+cnt < ans){
                    ans = l+cnt;
                    // printf("%d\n",ans);
                }
                cnt++;
            }
            printf("%d\n",ans);
        }
        
    }
    
}