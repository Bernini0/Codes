#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int u, v;
    set<int>x;
    set<int>y;
    scanf("%d %d", &u, &v);
    x.insert(u);
    y.insert(v);
    set<pair<int,int>>s;
    s.insert({u,v});
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        int l = x.size();
        int m = y.size();
        scanf("%d %d", &u, &v);
        x.insert(u);
        y.insert(v);
        if(x.size()!=l && y.size()!=m){
            s.insert({u,v});
        }
    }
    printf("%d\n",s.size()-1);
}