#include <bits/stdc++.h>
using namespace std;
bool vis[26][26][26];
int dis[26][26][26];
int bfs(int c, int d, int e, int f, int g, int h)
{
    if (vis[c][d][e])
        return -1;
    if (vis[f][g][h])
        return -1;
    queue<pair<int, pair<int, int>>> q;
    q.push({c, {d, e}});
    vis[c][d][e] = true;
    int u, v, w;
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second.first;
        w = q.front().second.second;
        q.pop();
        if(!vis[(u+1)%26][v][w]){
            vis[(u+1)%26][v][w] = true;
            dis[(u+1)%26][v][w] = dis[u][v][w]+1;
            q.push({(u+1)%26,{v,w}});
            if(vis[f][g][h])return dis[f][g][h];
        }
        if(!vis[(u-1+26)%26][v][w]){
            vis[(u-1+26)%26][v][w] = true;
            dis[(u-1+26)%26][v][w] = dis[u][v][w]+1;
            q.push({(u-1+26)%26,{v,w}});
            if(vis[f][g][h])return dis[f][g][h];
        }
        if(!vis[u][(v+1)%26][w]){
            vis[u][(v+1)%26][w] = true;
            dis[u][(v+1)%26][w] = dis[u][v][w]+1;
            q.push({u,{(v+1)%26,w}});
            if(vis[f][g][h])return dis[f][g][h];
        }
        if(!vis[u][(v-1+26)%26][w]){
            vis[u][(v-1+26)%26][w] = true;
            dis[u][(v-1+26)%26][w] = dis[u][v][w]+1;
            q.push({u,{(v-1+26)%26,w}});
            if(vis[f][g][h])return dis[f][g][h];
        }
        if(!vis[u][v][(w+1)%26]){
            vis[u][v][(w+1)%26] = true;
            dis[u][v][(w+1)%26] = dis[u][v][w]+1;
            q.push({u,{v,(w+1)%26}});
            if(vis[f][g][h])return dis[f][g][h];
        }
        if(!vis[u][v][(w-1+26)%26]){
            vis[u][v][(w-1+26)%26] = true;
            dis[u][v][(w-1+26)%26] = dis[u][v][w]+1;
            q.push({u,{v,(w-1+26)%26}});
            if(vis[f][g][h])return dis[f][g][h];
        }

    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        
        // getchar();

        string s1, s2, s3, a, b;
        cin >> a >> b;
        int n;
        cin >> n;
        vector<string> v;
        while (n--)
        {
            cin >> s1 >> s2 >> s3;
            for (int i = 0; i < s1.size(); i++)
            {
                for (int j = 0; j < s2.size(); j++)
                {
                    for (int k = 0; k < s3.size(); k++)
                    {
                        string s4;

                        s4.push_back(s1[i]);

                        s4.push_back(s2[j]);

                        s4.push_back(s3[k]);
                        // cout << s4 <<endl;
                        v.push_back(s4);
                    }
                }
            }
        }
        memset(vis, false, sizeof(vis));
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        int c, d, e;
        for (int i = 0; i < v.size(); i++)
        {
            c = v[i][0] - 97;
            d = v[i][1] - 97;
            e = v[i][2] - 97;
            vis[c][d][e] = true;
        }
        memset(dis,0,sizeof(dis));
        int ans = bfs(a[0]-97,a[1]-97,a[2]-97,b[0]-97,b[1]-97,b[2]-97);
        cout << "Case " << tc <<": ";
        cout << ans <<endl;
    }
}