#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char arr[n][n];
        getchar();
        vector<pair<int,int>>v[10];
        vector<int>maximum[10];
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                scanf("%c", &arr[i][j]);
                v[arr[i][j]-48].push_back({i,j});
                maximum[arr[i][j]-48].push_back(j);
            }
            getchar();
        }
        int ans[10];
        for (int i = 0; i < 10; i++)
        {
            sort(maximum[i].begin(),maximum[i].end());
            sort(v[i].begin(),v[i].end());
        }
        memset(ans,0,sizeof(ans));
        // printf("jsadfhlkasdf\n");
        for (int i = 0; i < 10; i++)
        {
            if(v[i].size()==1 || v[i].size()==0){
                ans[i] = 0;
            }
            else
            {
                for (int j = 0; j < v[i].size(); j++)
                {
                    int c = max(v[i][j].second,n-v[i][j].second-1)*max(v[i][v[i].size()-1].first-v[i][j].first,v[i][j].first-v[i][0].first);
                    int d = max(v[i][j].first,n-v[i][j].first-1)*max(maximum[i][maximum[i].size()-1]-v[i][j].second,v[i][j].second-maximum[i][0]);
                    // printf("%d: %d %d\n",i,c,d);
                    c = max(c,d);
                    ans[i] = max(ans[i],c);
                }
                
            }
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
    
}