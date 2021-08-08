#include <bits/stdc++.h>
using namespace std;
bool adj[26][26];
bool vis[26];
vector<int>vertex;
vector<char>ans;
void dfs(int n){
    vis[n] = true;
    for (int i = 0; i < 26; i++)
    {
        if(adj[n][i] && !vis[i])dfs(i);
    }
    ans.push_back(n+'a');
}
int main()
{
    string s;
    vector<string>v;
    int cnt = 0;
    memset(vis,false,sizeof(vis));
    while (cin >> s && s!="#")
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(!vis[s[i]-'a']){
                cnt++;
                vis[s[i]-'a'] = true;
                vertex.push_back(s[i]-'a');
            }
        }
        v.push_back(s);
    }
    sort(vertex.begin(),vertex.end());
    for (int i = 0; i < v.size()-1; i++)
    {
        for(int j = i+1; j < v.size();j++){
            int k = 0;
            while (k < v[i].size() && k < v[j].size() && v[i][k]==v[j][k])
            {
                k++;
            }
            if(k != v[i].size() && k != v[j].size()){
                adj[v[i][k]-'a'][v[j][k]-'a'] = true;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < vertex.size(); i++)
    {
        if(!vis[vertex[i]])dfs(vertex[i]); 
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i <ans.size()-1; i++)
    {
        printf("%c",ans[i]);
    }
    printf("%c %d\n",ans[ans.size()-1],ans.size());
}