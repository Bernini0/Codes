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
        pair<int, int> cnt1, cnt2;
        cnt1.first = 0;
        cnt2.first = 0;
        int ans1, ans2;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                scanf("%d", &cnt1.second);
                cnt1.first++;
                ans1 = i;
            }
            else
            {
                int a;
                scanf("%d", &a);
                if (a == cnt1.second)
                    cnt1.first++;
                else
                {
                    cnt2.second = a;
                    cnt2.first++;
                    ans2 = i;
                }
            }
        }
        if(cnt1.first==1){
            printf("%d\n",ans1+1);
        }
        else
        {
            printf("%d\n",ans2+1);
        }
        
    }
}