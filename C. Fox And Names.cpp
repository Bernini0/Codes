#include <bits/stdc++.h>
using namespace std;
bool adj[26][26];
bool vis[26];
int indegree[26];
vector<char>ans;
void dfs(int n){
    vis[n] = true;
    for(int i = 0; i < 26; i++){
        if(adj[n][i] && !vis[i])dfs(i);
    }
    ans.push_back(n+'a');
}
void topological_sort()
{
    queue<int>q;
    for (int i = 0; i < 26; i++)
    {
        if(indegree[i]==0)q.push(i);
    }
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for (int i = 0; i < 26; i++)
        {
            if(adj[a][i]){
                indegree[i]--;
                // printf("%d %d %d\n",a,i,indegree[i]);
                if(indegree[i]==0)q.push(i);
            }
        }
        char c = a+'a';
        ans.push_back(c);
    }

    for (int i = 0; i < 26; i++)
    {
        if(indegree[i]>0){
            // printf("%d\n",i);
            ans.clear();
            // return;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<string>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    memset(indegree,0,sizeof(indegree));
    bool no = false;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++){
            int k = 0;
            while (k <v[i].size() && k < v[j].size() && v[i][k]==v[j][k])
            {
                k++;
            }
            if(k != v[i].size() && k != v[j].size()){
                adj[v[i][k]-'a'][v[j][k]-'a'] = true;
                // indegree[v[j][k]-'a']++;
            }
            if(k==v[j].size())no = true;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++){
            if(adj[i][j])indegree[j]++;
        }
    }
    
    topological_sort();
    if(no){
        printf("Impossible\n");
        return 0;
    }
    if(ans.size() == 0){
        printf("Impossible\n");
    }
    else
    {
        // reverse(ans.begin(),ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            printf("%c",ans[i]);
        }
        printf("\n");
    }
    
}