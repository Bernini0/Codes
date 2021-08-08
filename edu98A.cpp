#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int ans = 0;
        if(x >= y){
            ans = 2*y;
            if(x - y > 0){
                ans += ((x- y)*2-1);
            }
            printf("%d\n",ans);
        }
        else
        {
            ans = 2*x;
            if(y-x > 0){
                ans += ((y-x)*2-1);
            }
            printf("%d\n",ans);
        }
        
    }
    
}