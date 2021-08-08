#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int x1, y1, x2, y2, x3, y3,x,y;
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        x = x3+x1-x2;
        y = y1+y3-y2;
        int area = x1*y2+x2*y3+x3*y+x*y1;
        area -= (y1*x2+y2*x3+y3*x+y*x1);
        printf("Case %d: %d %d %d\n",tc,x,y,abs(area/2));
    }
}