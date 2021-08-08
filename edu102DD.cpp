#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<pair<int,int>>v;
        int cnt = 0;
        while (n > 2)
        {
            int a = sqrt(n);
            if(a*a==n){
                cnt+=2;
            }
            else
            {
                a+=1;
                cnt+=2;
            }
            for (int i = a+1; i < n; i++)
            {
                v.push_back({i,n});
                cnt++;
            }
            v.push_back({n,a});
            v.push_back({n,a});
            n = a;

        }
        printf("%d\n",cnt);
        for (int i = 0; i < v.size(); i++)
        {
            printf("%d %d\n",v[i].first,v[i].second);
        }
        
        
    }
    
}