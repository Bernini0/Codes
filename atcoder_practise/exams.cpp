#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int,int>>v1;
    vector<pair<int,int>>v2;
    int u1, u2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &u1, &u2);
        v1.push_back({u1,u2});
        v2.push_back({u2,u1});
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int ans = v2[0].first;
    for (int i = 1; i < v1.size(); i++)
    {
        if(ans > v2[i].first){
            ans = max(ans,v2[i].second);
            continue;
        }
        if(v2[i].second >= v2[i-1].second){
            ans = v2[i].first;
        }
        else if(v2[i].second < v2[i-1].second && v2[i].first != v2[i-1].first){
            ans = v2[i-1].second;
        }
    }
    printf("%d\n",ans);
}