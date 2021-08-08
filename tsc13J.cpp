#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m)==2 && n!=-1 && m != -1)
    {
        if(m==(n*(n-1))/2){
            printf("YES\n");
            for (int i = 1; i < n; i++)
            {
                for(int j = i+1; j <= n; j++)
                {
                    printf("%d %d\n",i,j);
                }
            }
            
        }
        else if(n==m){
            printf("YES\n");
            for (int i = 1; i <= n; i++)
            {
                int j = i+1;
                if(j  > n){
                    j %= n;
                }
                printf("%d %d\n",i,j);
            }
            
        }
        else if(n%2==0 && m == (n/2)*(n/2)){
            printf("YES\n");
            for (int i = 1; i < n; i+=2)
            {
                for(int j = 2; j <= n; j+=2){
                    printf("%d %d\n", i, j);
                }
            }
            
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}