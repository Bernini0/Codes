#include <bits/stdc++.h>
using namespace std;
int A[100000];
int F(int i){
    if (i <= 0) return 0;

    int value1 = F(i - 1);
    int value2 = __gcd(A[i],value1);

    return __gcd(value1, value2);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    int ans = F(n);
    printf("%d", &ans);
}