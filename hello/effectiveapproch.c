#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    int q;
    scanf("%d",&q);
    int query[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &query[i]);
    }
    int num1[2][q];
    num1[2][q]= {0};
    // memset(num1,0,sizeof(num1));
    // printf("%d",num1[1][2]);
    for (int i = 0; i < n; i++)
    {
        int cnt=-1;
        for (int j = 0; j < q; j++)
        {
            if (query[j]==number[i])
            {
                num1[0][j]=cnt;
                cnt--;
                num1[1][j]=i;
            }
            
        }
        
    }
    /*printf("%d",q);
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 2; i++)
        {
            printf("%d %d: %d \n",j,i,num1[j][i]);
        }
        
    }
    */
    int vatya=0,payta=0;
    int i = 0;
    for (int i = 0,j =0; i < n,j <q; i++,j++)
    {
        if (num1[0][j]<0)
        {
            vatya += (-1)*(num1[0][j]*(num1[1][j]+1));
            payta += (-1)*(num1[0][j]*(n-num1[1][j]));
        }
    }
    
    printf("%d %d",vatya,payta);
    
    

}