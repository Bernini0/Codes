#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int pos;
        if(n <4) printf("-1\n");
        else if(n%2 == 0)
        {
            
            int i;
            for (i = 2; i <= n; i += 2)
            {
                printf("%d ", i);
                pos = i;
            }
            printf("%d ",pos-3);
            printf("%d ",pos -1);
            for (int j = pos-5 ; j > 0; j -=2)
            {
                printf("%d ",j);
            }
        }
        else
        {
            int i;
            for (i = 1; i <= n; i += 2)
            {
                printf("%d ", i);
                pos = i;
            }
            printf("%d ",pos-3);
            printf("%d ",pos -1);
            for (int j = pos-5 ; j > 0; j -=2)
            {
                printf("%d ",j);
        
            }
        }
        printf("\n");


    }
    return 0;
}
