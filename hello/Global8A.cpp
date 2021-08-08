#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        if(b < a)swap(a,b);
        int cnt = 0;
        while (1)
        {
            if (cnt%2==0){
                a += b;
                cnt++;
                if(a > n){
                    break;
                }
            }
            else if(cnt%2==1){
                b += a;
                cnt++;
                if( b > n){
                    break;
                }
            }
        }
        printf("%d\n", cnt);
        
    }
    

}
