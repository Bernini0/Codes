#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    bool cancel = false;
    int count1[10000+1],count2[10000+1];
    memset(count1,-1,sizeof(count1));
    memset(count2,-1,sizeof(count2));
    bool vis[m];
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < m; i++)
    {
        int p;
        scanf("%d", &p);
        for(int j = 0; j < p; j++)
        {
            int b;
            scanf("%d", &b);
            if(b < 0){
                count1[abs(b)] = i;
            }
            else count2[b] = i;
            if(count1[abs(b)]==count2[abs(b)]){
                vis[i] = true;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if(!vis[i]){
            cancel = true;
            break;
        }
    }
    
    if(cancel){
        printf("YES\n");
    }
    else printf("NO\n");
}