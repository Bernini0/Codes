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
        if(n%2==0){
            for (int i = n; i >= 1 ; i--)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
        else
        {
            printf("%d",(n/2)+1);
            for (int i = n; i >= 1; i--)
            {
                if(i==(n/2)+1){
                    continue;
                }
                else{
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
    }
    
}