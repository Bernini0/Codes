#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int q;
    scanf("%d", &q);
    while (q--)
    {
        ll n;
        scanf("%lld", &n);
        if (n == 1 || n == 2 || n == 3 || n == 5 || n == 6 || n == 9 || n == 10 || n == 13 || n == 17)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}