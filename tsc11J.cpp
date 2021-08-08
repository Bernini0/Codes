#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int x1, y1, x2,y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        long long int ans = abs(x1-x2)+abs(y1-y2);
        if(abs(x1-x2) > abs(y2-y1)){
            ans += ((abs(x2-x1)-abs(y2-y1))/2)*2;
        }
        else
        {
            ans += ((abs(y2-y1)-abs(x2-x1))/2)*2;
        }
        printf("%lld\n",ans);
    }
    
}