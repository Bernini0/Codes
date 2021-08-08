#include <bits/stdc++.h>
using namespace std;
int n, m, k;
bool yes = false;
bool check(int u, int v){
    if(u >= n || v >= m)return false;
    return true;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &m, &k);
        yes = false;
        // printf("ksjf");
        // dfs(0,0,k);
        int i = n-1+((m-1)*n);
        if(k==i){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}