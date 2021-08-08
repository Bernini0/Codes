#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v;
    int n;
    scanf("%d", &n);
    vector<int> v1[n];
    bool no = false;
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);

        for (int j = 0; j < m; j++)
        {
            int a;
            scanf("%d", &a);
            v1[i].push_back(a);
            if (v1[i].size() > 1)
            {
                if (v1[i][j - 1] > v1[i][j])
                {
                    no = true;
                }
            }
        }
        sort(v1[i].begin(), v1[i].end());
        v.push_back({v1[i][0],v1[i][v1[i].size()-1]});
    }
    sort(v.begin(), v.end());
    if(no){
        printf("NO\n");
        return 0;
    }
    if(!no)
    {
        for (int i = 1; i < v.size(); i++)
        {
            if(v[i-1].second > v[i].first){
                printf("NO\n");
                return 0;
            }
        }
        
    }
    printf("YES\n");
}