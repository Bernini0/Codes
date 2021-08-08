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
        int arr[n];
        memset(arr, 0, sizeof(arr));
        int l = 1, r = n;
        for (int i = 1; i <= n; i++)
        {
            if (n==1)
            {
                arr[0]=1;
                break;
            }
            
            else if ((r - l + 1) % 2 != 0)
            {
                arr[((l + r) / 2) - 1] = i+1;
                for (int j = 0; j < n; j++)
                {
                    if (arr[i]==0)
                    {
                        l=j+1;
                        for (int k =((l + r) / 2) - 1; k >j ; k++)
                        {
                              if (arr[k]==0)
                              {
                                  r = k;
                              }
                              
                        }
                        
                    }
                    
                }
                
            }
            else
            {
                arr[(((l+r)-1)/2)-1] = i+1;
                for (int j = 0; j < n; j++)
                {
                    if (arr[i]==0)
                    {
                        l=j;
                        for (int k =((l + r) / 2) - 1; k >j ; k++)
                        {
                              if (arr[k]==0)
                              {
                                  r = k;
                              }
                              
                        }
                        
                    }
                    
                }
                


            }
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        
    }
}