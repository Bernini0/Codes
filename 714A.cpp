#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        if(k+1 > (n+1)/2){
            printf("-1\n");
            continue;
        }
        int c = 0;
        for (int i = 1; i <= n-c; i++)
        {
            printf("%d ", i);
            if(c < k){
                printf("%d ",n-c);
                c++;
            }
        }
        printf("\n");
    }
    
}