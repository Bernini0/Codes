#include <bits/stdc++.h>
using namespace std;
#define llu long long int
llu bigmod(llu a, llu b){
    if(b==0)return 1;
   else if(b%2==0){
        llu ret = bigmod(a,b/2);
        return ret * ret;
    }
    else
    {
        return a*bigmod(a,b-1);
    }
    
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    int cnt = 0;
    while (n>=1)
    {
        if(n%2==0){
            cnt++;
            n /= 2;
        }
        else
        {
            n/=2;
        }
        
    }
    printf("%lld\n",bigmod(2,cnt));
    
}