#include <bits/stdc++.h>
using namespace std;
#define llu long long int
vector<int>prime;
vector<pair<int,int>>factory;
void bitwiseseive(llu n){
    int arr[(n/64)+1];
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
            factory.push_back(make_pair(cnt,prime[i]));
        }
    }
    if (n != 1)
    {
        factory.push_back(make_pair(1, n));
    }
}
int main()
{
    bitwiseseive(100000+1);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        llu n;
        scanf("%lld", &n);
        factory.clear();
        factor(n);
        sort(factory.begin(),factory.end());
        printf("%d\n",factory[factory.size()-1].first);
        for(int i = 0; i < factory[factory.size()-1].first-1; i++){
            printf("%d ",factory[factory.size()-1].second);
            n /= factory[factory.size()-1].second;
        }
        printf("%lld\n",n);
    }
    

}