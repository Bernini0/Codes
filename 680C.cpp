#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int p;
        int q;
        scanf("%lld %d", &p, &q);
        vector<int>v;
        long long int k= p;
        for (int i = 2; i <= sqrt(q); i++)
        {
            if(q%i==0){
                v.push_back(i);
                if(q/i != i){
                    v.push_back(q/i);
                }
            }
        }v.push_back(q);

        long long int ans = -1;
        if(p%q!=0){
            printf("%lld\n",p);
            continue;
        }
        for (int i = 0; i < v.size(); i++)
        {
            long long int l = p;
            int d = 1;
            while (l%q==0){
                d *= v[i];
                l /= v[i];
            }
            ans = max(ans,l);
        }
        printf("%lld\n",ans);
    }
    
}