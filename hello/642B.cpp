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
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        sort(a,a+n);
        sort(b,b+n);
        for (int i = 0; i < n; i++)
        {
            if(b[n-1-i]>a[i] && i<k)
            {
                a[i]=b[n-1-i];
            }
        }
        int sum =0;
        
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        
        printf("%d\n",sum);
    }
    
}
