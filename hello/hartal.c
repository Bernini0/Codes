#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        
        scanf("%d", &n);
        int arr[n+10];
        memset(arr,0,sizeof(arr));
        int party;
        scanf("%d",&party);
        int count = 0;
        while (party--)
        {
            int h;
            scanf("%d", &h);
            for (int  i = h; i <= n; i=i+h)
            {
                if (i%7!=6 && i%7!=0)
                {
                    arr[i]=1;
                }
                
            }
            
        }
        for (int i = 0; i <= n; i++)
        {
            if (arr[i]==1)
            {
                count++;
            }
            
        }
        
        printf("%d\n",count);
        
    }
    
}