#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000000+7;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        ll ans;
        if(n%6==1){
            ans = a;
            // ans%=mod;
        }
        else if(n%6==2){
            ans = b;
            // ans%=mod;
        }
        else if(n%6==3){
            ans = b-a;
            // ans%=mod;
        }
        else if(n%6==4){
            ans = a*(-1);
            // ans%=mod;
        }
        else if(n%6==5){
            ans = b*(-1);
            // ans%=mod;
        }
        else{
            ans = a-b;
            // ans%=mod;
        }
        
        ans%=mod;
        if(ans < 0 ){
            ans+= mod;
        }
        printf("%lld\n",ans);
    }
    
}