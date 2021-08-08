#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int right[n], left[n];
    int right1=0, right0=0,left1=0,left0=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &right[i], &left[i]);
        {
        if (right[i]==1)
        {
            right1++;
        }
        else
        {
            right0++;
        }
        }
        {
            if (left[i]==1)
            {
                left1++;
            }
            else
            {
                left0++;
            }
            
        }

        
        
    }
    int ans=0;
    if (left1>left0)
    {
        ans=left0;
    }
    else
    {
        ans = left1;
    }
    if (right1>right0)
    {
        ans=ans+right0;
    }
    else
    {
        ans= ans+right1;
    }
    
    
    
    printf("%d\n",ans);
}