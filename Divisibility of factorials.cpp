#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
void seive()
{
    int arr[1000000 >> 6];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i < 1000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j < 1000000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i < 1000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            prime.push_back(i);
        }
    }
}
vector<pair<int,int>> ffactor;
vector<pair<int,int>> dfactor;
unsigned long long int res;
void factory(int n, int d)
{
    res = 1;
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
    {
        int k = n;
        int cnt = 0;
        int l = prime[i];
        while (k / l != 0)
        {
            cnt += k / l;
            l *= prime[i];
        }
        ffactor.push_back(make_pair(prime[i],cnt));
        res *= (cnt+1);
    }
    for (int i = 0; i < prime.size() && prime[i]*prime[i] <= d; i++)
    {
        int cnt1 = 0;
        if(d %prime[i]==0){
            while (d%prime[i]==0)
            {
                cnt1++;
                d /= prime[i];
            }
        }
        if(cnt1 >0){
            dfactor.push_back(make_pair(prime[i],cnt1));
        }
    }
    if(d >1){
        dfactor.push_back(make_pair(d,1));
    }
    
}
int main()
{
    seive();
    int n,d;
    while(scanf("%d %d", &n, &d)==2 && (n !=0 || d !=0))
    {
        dfactor.clear();
        ffactor.clear();
        factory(n,d);
        sort(dfactor.begin(),dfactor.end());
        sort(ffactor.begin(),ffactor.end());

        // printf("%ld\n",dfactor.size());
        if(d==1){
            printf("%llu\n",res);
            continue;
        }
        if(dfactor[dfactor.size()-1].first > ffactor[ffactor.size()-1].first || dfactor.size() > ffactor.size()){
            printf("0\n");
            continue;
        }
        else
        {
            int j = 0;
            bool b = true;
            for (int i = 0; i < ffactor.size() && j < dfactor.size(); i++)
            {
                if(ffactor[i].first==dfactor[j].first){
                    ffactor[i].second -= dfactor[j].second;
                    j++;
                    if(ffactor[i].second < 0){
                        b = false;
                    }
                }
            }
            if(!b){
                printf("0\n");
            }
            else
            {
                unsigned long long int a = 1;
                for (int i = 0; i < ffactor.size(); i++)
                {
                    a *= (ffactor[i].second+1);
                }
                printf("%llu\n",a);
            }
            

            
        }
        

    }

}