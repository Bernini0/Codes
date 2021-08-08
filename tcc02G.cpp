#include <bits/stdc++.h>
using namespace std;
vector<int>primes;
int arr[(1000000)+1];
void bitwise_seive()
{
    
    memset(arr,0,sizeof(arr));
    for (int i = 2; i*i <= 1000000; i++)
    {
        if(arr[i]==0){
            for(int j = i*i; j < 1000001; j+=i){
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 1000000; i++)
    {
        if(arr[i]==0){
            primes.push_back(i);
        }
    }
    
}
int solve(int x, int y, int k){
    if(x < y)swap(x,y);
    if(x==k || y==k){
        return 0;
    }
    if(arr[x]==0 && arr[y]==0){
        return 1;
    }
    set<int>difference;
    for (int i = 0;i < primes.size(); i++)
    {
        if(primes[i] >= x)break;
        if(primes[i] <= k)continue;
        else
        {
            difference.insert(x-primes[i]);
        }
        
    }
    for (int i = 0; i < primes.size(); i++)
    {
        if(primes[i] >= x)break;
        if(k >= primes[i])continue;
        else
        {
            if(difference.count(y-primes[i]))return 1;
        }
        
    }
    return 0;
    
}
int main()
{
    int t;
    scanf("%d", &t);
    bitwise_seive();
    // printf("%d\n",primes.size());
    for(int tc = 1;tc <= t; tc++)
    {
        int x,y,k,w;
        scanf("%d %d %d %d", &x, &y, &k, &w);
        if(x==k || y==k){
            printf("Case %d: Bob\n",tc);
            continue;
        }
        if(arr[x]==0 && arr[y]==0){
            printf("Case %d: Alice\n",tc);
            continue;
        }
        if(w==1){
            int a = solve(x,y,k);
            if(!a){
                printf("Case %d: Bob\n",tc);
            }
            else
            {
                printf("Case %d: Alice\n",tc);
            }
        }
        else
        {
            int a = solve(x-1,y,k)+solve(x,y-1,k);
            if(a>0){
                printf("Case %d: Alice\n",tc);
            }
            else
            {
                printf("Case %d: Bob\n",tc);
            }
            
        }
        
    }
    
}