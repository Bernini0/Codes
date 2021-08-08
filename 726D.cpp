#include <bits/stdc++.h>
using namespace std;
vector<int>primes;
int bigmod(int a, int b){
    if(a==0)return 0;
    int product = 1;
    while (b > 0)
    {
        if(b&1){
            product*=a;
            b--;
        }
        a*=a;
        b/=2;
    }
    return product;
}
void bitwise_seive()
{
    int arr[(100000>>6)+1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i <= 100000; i+=2)
    {
        if(!(arr[i>>6] & (1 <<((i >>1) & 31)))){
            for(int j = i*i; j <= 100000; j+= 2*i){
                arr[j >> 6] |= (1 <<((j >>1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 100000; i+=2)
    {
        if(!(arr[i>>6] & (1 <<((i >>1) & 31)))){
            primes.push_back(i);
        }
    }
    
}
vector<pair<int,int>>factory;
vector<int>divisors;
void factor(int n)
{
    for (int i = 0; primes[i]*primes[i] <= n; i++)
    {
        int cnt = 0;
        if(n%primes[i]==0){
            while (n%primes[i]==0)
            {
                cnt++;
                n/= primes[i];
            }
            factory.push_back({primes[i],cnt});
        }
    }
    if(n > 1){
        factory.push_back({n,1});
    }
}
vector<int>v;
void cal(int index){
    if(index == factory.size()){
        int ans = 1;
        for (int i = 0; i < v.size(); i++)
        {
            ans*=v[i];
        }
        divisors.push_back(ans);
    }
    else{
        for (int i = 0; i <= factory[index].second; i++)
        {
            v.push_back(bigmod(factory[index].first,i));
            cal(index+1);
            v.pop_back();
        }
        
    }
}
int main()
{
    bitwise_seive();
    // printf("%ld\n",primes.size());
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        factory.clear();
        divisors.clear();
        v.clear();
        factor(n);
        cal(0);
        bool alice = false;
        for (int i = 1; i < divisors.size()-1; i++)
        {
            int a = n/divisors[i];
            a--;
            int b = sqrt(a);
            if(b*b==a){
                // printf("%d\n",divisors[i]);
                alice = true;
            }
        }
        if(alice){
            printf("Alice\n");
        }
        else{
            printf("Bob\n");
        }
    }
    
}