#include <bits/stdc++.h>
using namespace std;
int vis[100];
vector<int>adj[100];
void bfs(int s){
    queue<int>generations;
    vis[s] = 1;
    generations.push(s);
    while (!generations.empty())
    {
        int u = generations.front();
        generations.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (vis[adj[u][i]] == 0) {
                vis[adj[u][i]] = 1;
                generations.push(adj[u][i]);
            }
        }
    }
    
}
int main()
{
    
}