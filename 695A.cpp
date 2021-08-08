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
        if(n > 10){
            int k = (n/10);;
            n -= (k*10);
            int j = 1;
            for (int i = 0; i < k; i++)
            {
                printf("9876543210");
            }
            for (int i = 1; i <= n; i++)
            {
                printf("%d",i);
            }
            
            printf("\n");
        }
        else
        {
            int j = 0;
            for (int i = 9; j < n ; i--, j++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
        
    }
    
}