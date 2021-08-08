#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x==0){
        printf("1\n");
        printf("0 1\n");
        return 0;
    }
    if(y==0){
        printf("1\n");
        printf("0 1\n");
        return 0;
    }
    
    int ans = min(x,y)+1;
    printf("%d\n",ans);
    
    for (int i = x; i >= x-min(x,y); i--)
    {
        printf("%d %d\n",i,x-i);
    }
    
}