#include <bits/stdc++.h>
using namespace std;
vector<int>primes;
int arr[(10000000>>6)+3];
void bitwise_seive()
{
    
    memset(arr,0,sizeof(arr));
    for(int i = 3; i * i <= 10000023; i+= 2){
        if(!(arr[i >> 6] & (1 << ((i >>1) & 31)))){
            for(int j = i*i; j <= 10000023; j+= 2*i){
                arr[j >> 6] |= (1 << ((j >>1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <=10000023; i+=2)
    {
        if(!(arr[i>>6] & (1 << ((i >>1) & 31)))){
            primes.push_back(i);
        }
    }
    
}
int main()
{
    bitwise_seive();
    // printf("%d\n",primes.size());
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int cnt = 0;
        int n;
        scanf("%d", &n);
        // int limit = lower_bound(primes.begin(),primes.end(),n)-primes.begin();
        if(n==4){
            printf("Case %d: 1\n",tc);
            continue;
        }
        for (int i = 1; i < primes.size(); i++)
        {
            int k = n-primes[i];
            // int idx = lower_bound(primes.begin(),primes.end(),k)-primes.begin();
            if(k < primes[i]){
                break;
            }
            if(!(arr[k>>6] & (1 <<((k>>1) & 31)))){
                // printf("%d %d\n",primes[i],k);
                cnt++;
            }
        }
        printf("Case %d: %d\n",tc,cnt);
    }
    
}