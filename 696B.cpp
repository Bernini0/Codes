#include <bits/stdc++.h>
using namespace std;
vector <int>prime;
void bitwiseseive(int n){
    int arr[(n/64)+1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < n; i+=2)
    {
        if(!(arr[i/64] & (1 << ((i >> 1)& 31)))){
            for (int j = i*i; j < n; j+= 2*i)
            {
                arr[j/64] |= (1 << ((j >> 1) & 31));
            }
            
        }
    }
    
    prime.push_back(2);
    for (int i = 3; i < n; i+=2)
    {
        if(!(arr[i/64] & (1<< ((i >> 1)&31)))){
            prime.push_back(i);
        }
    }
    
}
vector <int>factor[10000+1];
void factory(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            factor[n].push_back(i);
            if(n/i!=i){
                factor[n].push_back(n/i);
            }
        }
    }
    
    
}
int main()
{
    bitwiseseive(10000000);
    // for (int i = 3; i <= 10000; i++)
    // {
    //     factory(i);
    //     sort(factor[i].begin(),factor[i].end());
    // }
    // for (int i = 0; i < factor[6].size(); i++)
    // {
    //     printf("%d ",factor[6][i]);
    // }
    // printf("\n");
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int d;
        scanf("%d", &d);
        int d2 = 2*d+1;
        int j = lower_bound(prime.begin(),prime.end(),d+1)-prime.begin();
        int k = lower_bound(prime.begin(),prime.end(),prime[j]+d)-prime.begin();
        j = prime[j];
        k = prime[k];
        long long int ans = (long long int)j*(long long int)k;
        printf("%lld\n",ans);
    }
    
}