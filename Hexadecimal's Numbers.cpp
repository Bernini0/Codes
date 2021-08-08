#include <bits/stdc++.h>
using namespace std;
long long int powmod(int a, int b)
{
    long long int product = 1;
    if(a==0)return 0;
    while (b > 0)
    {
        if(b%2==1){
            product*= a;
            b--;
        }
        a *= a;
        b/= 2;
    }
    return product;
}
int binary(int n)
{
    vector<int>v;
    while (n>0)
    {
        v.push_back(n%2);
        n/= 2;
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += (v[i]*powmod(10,i));
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    int x = log10(n);
    int y = powmod(10,x);
    // printf("%d\n",y);
    int z = powmod(2,x);
    long long int ans = powmod(2,x)-1;
    // printf("%d\n",ans);
    for (int i = 0; i < z; i++)
    {
        // printf("%d\n",y&i);
        if((y+binary(i)) <= n){
            // printf("%d\n",i);
            ans++;
        }
        else{
            break;
        }
    }
    printf("%lld\n",ans);
}