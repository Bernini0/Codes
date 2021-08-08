#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,m;
    printf("Enter digits of two number\n");
    scanf("%d %d",&n, &m);
    int num1[n],num2[m];
    int arr[m][n+m];
    memset(arr, 0, sizeof(arr));
    printf("Enter number 1(one digit at a time):\n");

    for (int i = n-1; i >=0; i--)
    {
        scanf("%d",&num1[i]);
    }
    printf("Enter number 2(one digit at a time):\n");
    for (int  i = m-1; i >= 0; i--)
    {
        scanf("%d",&num2[i]);
    }
    int carry = 0;
    for (int i = 0; i < m; i++)
    {
        carry=0;
        for (int j = 0; j < n; j++)
        {
            arr[i][n+m-j-i-1]=(carry+(num1[j]*num2[i]))%10;
            carry = (carry+(num1[j]*num2[i]))/10;
            if (j==n-1 && carry !=0)
            {
                arr[i][n+m-i-j-2]=carry;
            }
            

        }
        
    }
    int ans[n+m];
    int carry1=0;
    memset(ans,0,sizeof(ans));
    for (int i = n+m-1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (j==0)
            {
                ans[i]=(carry1+ans[i]+arr[j][i]);
                carry1=0;
            }
            else
            {
                ans[i] =ans[i]+arr[j][i];
            }
            
            
           
        }
        carry1=ans[i]/10;
        ans[i]=ans[i]%10;
        
        
    }
    printf("Answer:");
    for (int i = 0; i < n+m; i++)
    {
        printf(" %d ",ans[i]);
    }
    
    
    return 0;
    
    
}