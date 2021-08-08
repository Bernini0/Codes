#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int indegree[n+1];
    memset(indegree,0,sizeof(indegree));
    for (int i = 0; i < m; i++)
    {
        int u,v;
        scanf("%d %d", &u, &v);
        if(u > v)swap(u,v);
        indegree[u]++;
    }
    int cnt = 0;
    for (int i = 1; i < n+1; i++)
    {
        if(indegree[i]==0){
            cnt++;
        }
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int a;
        scanf("%d", &a);
        if(a==1){
            int u,v;
            scanf("%d %d", &u, &v);
            if(u > v)swap(u,v);
            if(indegree[u]==0)cnt--;
            indegree[u]++;
        }
        else if(a==2){
            int u,v;
            scanf("%d %d", &u, &v);
            if(u > v)swap(u,v);
            if(indegree[u]==1)cnt++;
            indegree[u]--;
        }
        else if(a==3){
            printf("%d\n",cnt);
        }
    }
    
}