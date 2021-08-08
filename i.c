#include <stdio.h>
int main()
{
    int a, b, c, d = 0, e;
    scanf("%d", &a);
    int arr[a+9];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int q;
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d", &b);
        for (d = 0, c = 0; c < a; c++)
        {
            if(b ==arr[c])
            {
                d +=1;
                break;
            }
            else
            {
                continue;
            }
        }
        if (d > 0)
        {
            printf("Number is found at %d.\n",c);
        }
        else
        {
            printf("Number is not found.\n");
        }
        
    }
    
    return 0;
    
}