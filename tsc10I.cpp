#include <bits/stdc++.h>
using namespace std;
int parent[1000+1];
int si_ze[1000+1];
int find(int v){
    if(v==parent[v])return v;
    return parent[v] = find(parent[v]);
}
void sf(int u, int v){
    int a = find(u);
    int b = find(v);
    if(si_ze[a]  < si_ze[b])swap(a,b);
    parent[b] = a;
    si_ze[a] += si_ze[b];
}
bitset<1000>i_f[4000];
bitset<1000>want[4000];
bitset<1000>have;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        cin>>i_f[i] >> want[i];
    }
    cin >> have;
    bool vis[m];
    memset(vis,false,sizeof(vis));
    bool finished = false;
    while (!finished)
    {
        finished = true;
        for (int i = 0; i < m; i++)
        {
            if(!vis[i] && (i_f[i]|have)==have){
                have |= want[i];
                finished = false;
                vis[i] = true;
            }
        }
    }
    for (int i = n-1; i >= 0 ; i--)
    {
        cout << have[i];
    }
    printf("\n");
}