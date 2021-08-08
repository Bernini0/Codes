#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
vector<int> prime;
vector<pair<int, int>> factory;
void bitwiseseive(llu n){
    int arr[n/64];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < n; i+=2)
    {
        if(!(arr[i>>6] & (1 << ((i>>1)& 31)))){
            for (int j = i*i; j < n; j+= 2*i)
            {
                arr[j>>6] |= (1 << ((j>>1) & 31));
            }
            
        }
    }
    
    prime.push_back(2);
    for (int i = 3; i < n; i+=2)
    {
        if(!(arr[i>>6] & (1<< ((i >>1 )& 31)))){
            prime.push_back(i);
        }
    }
    
}
void factor(llu n)
{
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++)
    {
        int cnt = 0;
        while (n % prime[i] == 0)
        {
            cnt++;
            n /= prime[i];
        }
        if (cnt != 0)
        {
            factory.push_back(make_pair(prime[i], cnt));
        }
    }
    if (n != 1)
    {
        factory.push_back(make_pair(n, 1));
    }
}
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
    bitwiseseive(100000000);
    printf("%d\n",prime.size());
    int t;
    scanf("%d", &t);
    while (t--)
    {
        llu n;
        scanf("%llu", &n);
        factory.clear();
        factor(n);
        llu ans = 1;
        // printf("%d\n",factory.size());
        for (int i = 0; i < factory.size(); i++)
        {
            printf("%d %d\n",factory[i].first,factory[i].second);
        }
        
        // for (int i = 0; i < factory.size(); i++)
        // {
        //     llu cur1 = 1;
        //     llu cur2 = 1;
        //     while (factory[i].second > 0)
        //     {
        //         cur1 *= factory[i].first;
        //         cur2 += cur1;
        //         factory[i].second--;
        //     }
        //     ans *= cur2;
        // }
        for (int i = 0; i < factory.size(); i++)
        {
            factory[i].second++;
            // printf("%lld\n",factory[i].second);
            ll temp = (bigmod(factory[i].first,factory[i].second)-1)/(factory[i].first-1);
            ans = ((ans)*(temp)); 
        }
        ans = ans - n;
        printf("%llu\n", ans);
        printf("%llu\n",bigmod(2,5));
        
    }
}