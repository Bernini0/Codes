#include <bits/stdc++.h>>
using namespace std;
int main()
{
    
        int n, q;
        scanf("%d %d", &n, &q);
        int arr[n];
        int colors[51];
        memset(colors,-1,sizeof(colors));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(colors[arr[i]]==-1){
                colors[arr[i]] = i;
                
            }
        }
        for(int i = 1; i <= q; i++)
        {
            int a;
            scanf("%d", &a);
            int b = colors[a];
            for (int j = 0; j < 51; j++)
            {
                if(colors[j] < b){
                    colors[j]++;
                }
            }
            colors[a] = 0;
            printf("%d ",b+1);
        }
        printf("\n");
    
    
}