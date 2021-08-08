#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int edge_id[1000];
int vis[1000];
void dfswithstack(int start, int nodes) //s= start node, n = # of nodes
{
    stack <int> s;
    s.push(start);
    for (int i = 0; i < 1000; i++)
    {
        vis[i] = edge_id[i] = 0;
    }
    while (!s.empty())
    {
        int u = s.top();
        s.pop();
        while (edge_id[u] < adj[u].size())
        {
            int v = adj[u][edge_id[u]];
            edge_id[u]++;
            if(!vis[v]){
                vis[v] = 1;
                s.push(u);
                s.push(v);
                break;
            }
        }
        
    }
    

}
int main()
{

}