#include <stdio.h>
int main()
{
    int a, c =0;
   
    scanf("%d", &a);
    
    int arr[a+9];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        c += arr[i];
        if (i < a-1)
        {
            printf("%d ",c);
        }
        else
        {
            printf("%d\n",c);
        }
    }
    return 0;
}