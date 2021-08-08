#include <stdio.h>
int main()
{
    int a, i, j;
    scanf("%d", &a);
    int array[a+9];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d %d", &i, &j);
    for(; i<j;i++,j--)
    {
        int c = array[i];
        array[i] = array[j];
        array[j] = c;
    }
    for (int i = 0; i < a; i++)
    {
        if (i < a-1)
        {
            printf("%d ", array[i]);
        }
        else
        {
            printf("%d\n", array[i]);
        }
        
        
    }
    
    return 0;
    
}