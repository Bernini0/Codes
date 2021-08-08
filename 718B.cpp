#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        bool vis[100][100];
        memset(vis, false, sizeof(vis));
        vector<pair<int, pair<int, int>>> arr;
        vector<int> arr2[n];
        int a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a);
                arr.push_back({a, {i, j}});
                arr2[i].push_back(a);
            }
            sort(arr2[i].begin(), arr2[i].end());
        }
        sort(arr.begin(), arr.end());
        int k = 0;
        int ans[n][m];
        memset(ans, -1, sizeof(ans));
        for (int i = 0; i < m; i++)
        {
            ans[arr[i].second.first][k] = arr[i].first;
            vis[arr[i].second.first][arr[i].second.second] = true;
            k++;
            // k++;
        }
       for (int i = 0; i < n; i++)
       {
           for(int j = 0; j < m; j++){
               if(ans[i][j]==-1){
                   ans[i][j] = arr2[i][arr2[i].size()-1];
                   arr2[i].pop_back();
               }
           }
       }
       

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
}