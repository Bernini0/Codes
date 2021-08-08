#include <bits/stdc++.h>
using  namespace std;
int parent[1005];
int rnk[1005];
vector<pair<int,int>>no_need;
set<int>s;
int find_set(int a)
{
    if(parent[a]==a)return a;
    return parent[a] = find_set(parent[a]);
}
void union_set(int a, int b)
{
    int c = find_set(a);
    int d = find_set(b);
    if(c!=d)
    {
        if(rnk[c] < rnk[d]){
            swap(c, d);
        }
        parent[d] = c;
        s.erase(d);
        if(rnk[c]==rnk[d]){
            rnk[d]++;
        }
    }
    else
    {
        if(rnk[c] < rnk[d]){
            swap(a,b);
        }
        no_need.push_back({a,b});
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n ; i++)
    {
        s.insert(i);
    }
    for (int i = 0; i < 1005; i++)
    {
        parent[i] = i;
        rnk[i] = 0;
    }
    int u,v;
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d %d", &u, &v);
        union_set(u,v);
    }
    if(s.size()==1){
        printf("0\n");
    }
    else
    {
        set<int>::iterator it;
        vector<int>v;
        printf("%d\n",s.size()-1);
        for (it = s.begin(); it!=s.end();++it)
        {
            v.push_back(*it);
        }
        int j = 0;
        // printf("%d\n",no_need.size());
        for (int i = 1; i < v.size(); i++)
        {
            printf("%d %d %d %d\n",no_need[j].first,no_need[j].second,v[0],v[i]);
            j++;
        }
        
    }
    
}