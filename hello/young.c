#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int arr[(3*t)-1];
    for (int i = 0; i < 3*t; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x=0, y=0,z=0;
    for (int i = 0; i < 3*t; i++)
    {
        if (i%3==0)
        {
            x +=arr[i];
        }
        else if (i%3 ==1)
        {
            y +=arr[i];

        }
        else
        {
            z +=arr[i];
        }
        
        
        
    }
    if (x == 0 & y == 0 && z == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
    
    
    
    
    
}