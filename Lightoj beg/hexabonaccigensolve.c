#include  <stdio.h>
int main()
{
    long long int t, a, b, c, d, e, f, n;
    long long int arr[10007];
    scanf("%lld", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        arr[3] = d;
        arr[4] = e;
        arr[5] = f;
        for (int i = 6; i < 10007; i++)
        {
            arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007; 
        }
        printf("Case %d: %d\n",tc, arr[n]%10000007);
    }
    return 0;
    
    
}