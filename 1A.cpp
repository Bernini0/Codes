#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        int l = log10(n)/(log10(2));
        l++;
        printf("%lld\n",n<<l);
        
    }
    
    
}