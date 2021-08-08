#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int size;
        scanf("%d", &size);
        getchar();

        char str[size+1];
        scanf("%[^\n]c", str);

        int first=-1, second = -1;
        for ( int i = 0; i < size; i++)
        {
            int currentstr = (int)str[i]-48;
            if (currentstr%2 !=0)
            {
                if (first ==-1 && second ==-1)
                {
                    first = currentstr;
                }
                else
                {
                    second = currentstr;
                }
                
                
            }
            
        }
        if (first != -1 && second != -1)
        {
            printf("%d%d\n", first,second);
        }
        else
        {
            printf("-1\n");
        }
        
        
        

    }
    
}