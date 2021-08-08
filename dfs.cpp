#include <bits/stdc++.h>
using namespace std;
int vis[1000];
vector <int>adj[1000];
void dfs(int pos){
    if(vis[pos]){
        return;
    }
    vis[pos] = 1;
    for (int i = 0; i < adj[vis[pos]].size(); i++)
    {
        dfs(adj[vis[pos]][i]);
    }
    
}
int main()
{

}