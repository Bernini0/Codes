#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int n;
        scanf("%d", &n);
        int b = n;
        int arr[n];
        memset(arr,0,sizeof(arr));
        for(int i = 0; i<n;i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            if(x<x1 || y<y1 || x>x2 || y>y2){
                arr[i] = -1;
            }
        }
        printf("Case %d:\n",tc);
        for (int i = 0; i < b; i++)
        {
            if(arr[i]==0){
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            
        }
        
        
    }
    
}