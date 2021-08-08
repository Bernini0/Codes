#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    long long int a=0, b=0;
    for (int i = 1; i < (n/2); i++)
    {
        a +=pow(2,i);
    }
    for (int i = n/2; i < n; i++)
    {
        b += pow(2,i);
    }
    a += pow(2,n);

    long long int ans =abs(a-b);
    printf("%lld\n",ans);
    }
}