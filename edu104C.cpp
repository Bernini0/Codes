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
            int k = n/2;
            int p = 1;
            int i = 1;
            int l = (n*(n-1))/2;
            while (p<=l)
            {
                if(i==n){
                    n--;
                    i = 1;
                }
                if(i == k)printf("0 ");
                else if(i < k)printf("1 ");
                else if(i > k)printf("-1 ");
                i++;
                p++;
            }
            printf("\n");
        }
        else
        {
            int k = n/2;
            int p = 1;
            int i = 1;
            int l = (n*(n-1))/2;
            while (p <= l)
            {
                if(i==n){
                    n--;
                    i = 1;
                };
                if(i <= k)printf("1 ");
                else if(i > k)printf("-1 ");
                i++;
                p++;
                
            }
            printf("\n");
        }
        
    }
    
}