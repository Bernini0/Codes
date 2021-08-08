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
        x+= y;
        x-=6;
        if(x>=0){
            printf("0\n");
            continue;
        }
        else x*=(-1);
        double ans = (double)x/(6*1.0);
        printf("%.10lf\n",ans);
    }
    
}