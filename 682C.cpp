#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n , m;
        scanf("%d %d", &n, &m);
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                scanf("%d", &arr[i][j]);
                if((i+j)%2==1){
                    if(arr[i][j]%2==0){
                        arr[i][j]++;
                    }
                }
                else if((i+j)%2==0){
                    if(arr[i][j]%2==1){
                        arr[i][j]++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        
    }
    
}