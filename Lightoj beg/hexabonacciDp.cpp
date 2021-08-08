#include <stdio.h>
#include <string.h>

const int maxn = 10000+7;
const long long int MOD = 10000007;

long long a, b, c, d, e, f, n;
long long arr[10000+7];

int fn( int n ) {
    if(arr[n] != -1) return arr[n]%MOD;

    arr[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ) % MOD;
    return arr[n];
}


int main() {
    int t;
    scanf("%d", &t);

    for(int tc = 1; tc <= t; tc++){
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);    

        memset(arr, -1, sizeof(arr));
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        arr[3] = d;
        arr[4] = e;
        arr[5] = f;
        

        printf("Case %d: %d\n", tc, fn(n) % MOD);
    }

    return 0;
}