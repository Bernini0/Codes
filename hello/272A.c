#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    // int arr[n+1];
    int sum = 0;
    int a;
    for (int i = 0; i < n; i++)
    
    {
        scanf("%d", &a);
        sum +=a;
        

    }
    int ans=0;
    for (int i = 1; i <= 5; i++)
    {
        if ((sum+i)%(n+1)!=1)
        {
            ans++;
        }
        
    }
    printf("%d",ans);
    
    return 0;
}