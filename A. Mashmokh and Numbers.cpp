#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if((n/2) > k){
        printf("-1\n");
    }
    else if(n==1){
        if(k >= 1){
        printf("-1\n");
        }
        else
        {
            printf("1\n");
        }
        
    }
    else
    {
        int l = n/2;
        int p = k-l+1;
        int p1 = 2*p;
        printf("%d %d ",p,2*p);
        int m = 200000000+2;
        for (int i = 1; i < l; i++)
        {
            if(m==p || m == p1 || m+1==p || m+1==p1){
                m+= 2;
            }
            printf("%d %d ",m,m+1);
            m+= 2;
        }
        if(n%2==1){
            printf("%d",m);
        }
        printf("\n");
    }
    
}