#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int>adj[n+1];
    vector<int>zeros;
    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a==-1){
            zeros.push_back(i);
        }
        else
        {
            adj[a].push_back(i);
        }
    }
    vector<int>ans(n+1,-1);
    
    bool no = false;
    for (int i = 0; i < zeros.size(); i++)
    {
        ans[zeros[i]] = 0;
    }
    
    while (!no)
    {
        no = true;
        for (int i = 1; i <= n; i++)
        {
            if(ans[i]!=-1){
                for(int j = 0; j <adj[i].size(); j++){
                    ans[adj[i][j]] = ans[i]+1;
                }
            }
        }
        for (int i = 1; i <=n; i++)
        {
            if(ans[i]==-1){
                no = false;
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    printf("%d\n",ans.size()-1);
    
}