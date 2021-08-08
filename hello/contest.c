#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n*3];
    int ans = 0;
    for (int i = 0; i < 3*n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 3*n; i=i+3)
    {
        if ((arr[i]+arr[i+1]+arr[i+2])>=2)
        {
            ans++;
        }
        
    }
    printf("%d\n",ans);

    return 0;
}