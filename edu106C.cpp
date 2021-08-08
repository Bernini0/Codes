#include <bits/stdc++.h>
using namespace std;
// void dfs()
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<ll>v;
        vector<ll>v1;
        vector<ll>v2;
        ll a;
        ll mini = 20000000000;
        int pos;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a);
            if(i%2){
                v1.push_back(a);
            }
            else
            {
                v2.push_back(a);
            }
            
            if(mini > a){
                mini = a;
                pos = i;
            }
            v.push_back(a);
        }
        int k;
        if(pos%2){
            sort(v1.begin(),v1.begin()+(pos/2));
            k = v1[0];
        }
        else
        {
            
        }
        
    }
    
}