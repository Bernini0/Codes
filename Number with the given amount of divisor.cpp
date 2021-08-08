#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
vector<int>prime;
void seive()
{
    int arr[(1000000>>6)+1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < 1000000; i+= 2)
    {
        if(!(arr[i >> 6] & (1 << ((i>>1) & 31)))){
            for (int j = i*i; j < 1000000; j+= 2*i)
            {
                arr[j >> 6] |= (1 << ((j>>1) & 31));
            }
            
        }
    }
    prime.push_back(2);
    for (int i = 3; i < 1000000; i+= 2)
    {
        if(!(arr[i >> 6] & (1 << ((i>>1) & 31)))){
            prime.push_back(i);
        }
    }

}
vector <int>factor;
void factory(int n)
{
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++)
    {
        int cnt = 0;
        if(n%prime[i]==0){
            while (n%prime[i]==0)
            {
                n /= prime[i];
                cnt++;
            }
            
        }
        if(cnt > 0){
            factor.push_back(cnt);
        }
    }
    if(n>1){
        factor.push_back(n-1);
    }
    
}
llu bigmod(int a, int b)
{
    if(b==0)return 1;
    else if(b%2==0){
        llu c = bigmod(a,b/2);
        return c*c;
    }
    else return a*bigmod(a,b-1);
}
int main()
{
    int n;
    seive();
    scanf("%d", &n);
    factory(n);
    if(n==1){
        printf("1\n");
        return 0;
    }
    if(n==2){
        printf("2\n");
        return 0;
    }
    if(factor.size()==1 && n > 2){
        int k = n/(factor[0]+1);
        k--;
        factor.push_back(k);
    }
    sort(factor.begin(),factor.end());
    reverse(factor.begin(), factor.end());
    llu res = 1;
    for (int i = 0; i < factor.size(); i++)
    {
        res *= bigmod(prime[i],factor[i]);
    }
    printf("%llu\n",res);
}