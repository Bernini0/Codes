#include <stdio.h>
int main()
{
    int a, c = 0,i;
    scanf("%d", &a);
    int arr[a+9];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    for (i = 0; i < a; i++)
    {
        if(x==arr[i])
        {
            c +=1;
            break;
        }
        else
        {
            continue;
        }
        
    }
    if (c > 0)
    {
        printf("%d\n",i);
    }
    else
    {
        printf("Not Found\n");
    }
    return 0;
}
    