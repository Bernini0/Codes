#include <bits/stdc++.h>
using namespace std;
vector<int>vertex;
vector<int>adj[26];
bool vis[26];
int n;
vector<char>ans(1000);
bool check(int idx, int v){
    for (int i = 0; i < idx; i++)
    {
        for(int j = 0; j < adj[v].size(); j++){
            if(adj[v][j]==ans[i]-'a')return false;
        }
    }
    return true;
}
void f(int idx){
    if(idx==n){
        for (int i = 0; i < idx; i++)
        {
            printf("%c",ans[i]);
        }
        printf("\n");
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(!vis[i] && check(idx, vertex[i])){
                vis[i] = true;
                ans[idx] = vertex[i]+'a';
                f(idx+1);
                vis[i] = false;
            }
        }
        
    }
    
}
int main()
{
    string c;
    int t = 0;
    while (getline(cin,c))
    {
        if(t)printf("\n");
        // cout << c <<endl;
        vertex.clear();
        for (int i = 0; i < 26; i++)
        {
            adj[i].clear();
        }
        ans.clear();
        for (int i = 0; i < c.size(); i++)
        {
            if(isalpha(c[i]))vertex.push_back(c[i]-'a');
        }
        sort(vertex.begin(),vertex.end());
        string s;
        getline(cin,s);
        // cout << s <<endl;
        int k = 0;
        int a;
        for (int i = 0; i < s.size(); i++)
        {
            if(isalpha(s[i])){
                k++;
                if(k==2){
                    adj[a].push_back(s[i]-'a');
                    k = 0;
                }
                else
                {
                    a = s[i]-'a';
                }
                
            }
        }
        n = vertex.size();
        memset(vis,false,sizeof(vis));
        f(0);
        t++;
    }
    
}