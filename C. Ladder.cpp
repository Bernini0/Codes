#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("sagf\n");
    int j = 2;
    vector<pair<int, int>> vi;
    int u = 1, v, k = 0;
    while (j < n+1)
    {
        while ((k == 0 && arr[j - 1] <= arr[j]) || (k == 1 && arr[j - 1] >= arr[j]))
        {
            // printf("%d %d\n",arr[j-1],arr[j]);
            j++;
            if(j==n+1){
                v = j-1;
                vi.push_back({u,v});
                break;
            }
            // printf("%d\n",j);
            
        }
        if(j != n+1 && k == 0){
            k = 1;
            // printf("sdg\n");
        }
        else if(j!= n+1 && k == 1){
            v = j-1;
            vi.push_back({u,v});
            u = j-1;
            k = 0;
        }
    }
    // printf("shgfjsaf\n");
    vector<pair<int,int>>query;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        query.push_back({a,b});
    }
    // for (int i = 0; i < vi.size(); i++)
    // {
    //     printf("%d %d\n",vi[i].first,vi[i].second);
    // }
    
    // printf("sagfbsaf\n");
    for (int i = 0; i < m; i++)
    {
        bool yes = false;
        if(query[i].first==query[i].second){
            printf("Yes\n");
            continue;
        }
        for(int j = 0; j < vi.size();j++){
            if(query[i].first >= vi[j].first && query[i].second <= vi[j].second){
                printf("Yes\n");
                yes = true;
                break;
            }
        }
        if(!yes){
            printf("No\n");
        }
    }
    
}