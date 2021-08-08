#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[2*n+1][2*n+1];
    arr[n][n] = n;
    for (int i = 1; i <=n ; i++)
    {
        arr[n][n-i] = n-i;
        arr[n][n+i] = n-i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 2*n; j++)
        {
            arr[n-i][j] = arr[n-i+1][j]-1;
            arr[n+i][j] = arr[n-i][j];
        }
        
    }
    for (int i = 0; i <=2*n; i++)
    {
        int zero = 0;
        for(int j = 0; j <= 2*n; j++){
            if(arr[i][j] >= 0){
                printf("%d",arr[i][j]);
                if(arr[i][j]==0 && (i==0 || i == 2*n)){
                    break;
                }
                else if(arr[i][j]==0 && zero == 0){
                    zero++;
                }
                else if(arr[i][j]==0 && zero==1){
                    break;
                }
            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    
}