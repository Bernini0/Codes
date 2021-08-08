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
        
        if(k > n)
        {
            int s = k%n;
            if(s > 0)s = 1;
            printf("%d\n",k/n+s);
        }
        else if(k==n)
        {
            printf("1\n");
        }
        else
        {
            k = (k*((n+k-1)/k));
            // printf("%d\n",k);
            int s = k%n;
            if(s>0)s = 1;
            printf("%d\n", (k/n)+s);
        }
    }
    
}