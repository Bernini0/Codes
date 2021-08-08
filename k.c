#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n+9];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int brr[m+9];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &brr[i]);
    }
    int ans = 0;
    for(int i = 0;i<n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
            {
                ans += 1;
                break;
            }
            else
            {
                continue;
            }
            
        }    
        
    }
    printf("%d\n",ans);
    //printf("%d", brr[4]);
    return 0;   
}