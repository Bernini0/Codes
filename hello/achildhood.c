#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        char str[6];
        scanf("%d", &n);
        getchar();
        scanf("%s", str);

        int mod = n%3;
       if (strcmp(str, "Bob")==0)
       {
        if (mod ==1 || mod == 2)
        {
            printf("Case %d: Bob\n", tc);

        }
        else
        {
            printf("Case %d: Alice\n", tc);
        }
       }
       else
       {
           if (mod == 2 || mod ==0)
           {
               printf("Case %d: Alice\n", tc);
           }
           else
           {
               printf("Case %d: Bob\n", tc);
           }
           
           
       }

       
       
    }
    return 0;

    
}