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
        getchar();
        char arr[n][n];
        vector<pair<int,int>>v(4);
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++){
                scanf("%c", &arr[i][j]);
                if(arr[i][j]=='*'){
                    v[k]={i,j};
                    k++;
                }
            }
            getchar();
        }
        if(v[0].first==v[1].first){
            v[2].first = v[3].first = (v[0].first+1)%n;
            v[2].second = v[0].second;
            v[3].second = v[1].second;
            arr[v[2].first][v[2].second] = '*';
            arr[v[3].first][v[3].second] = '*';
        }
        else if(v[0].second==v[1].second){
            v[2].second = v[3].second = (v[0].second+1)%n;
            v[2].first = v[0].first;
            v[3].first = v[1].first;
            arr[v[2].first][v[2].second] = '*';
            arr[v[3].first][v[3].second] = '*';
        }
        else if(v[0].second > v[1].second)
        {
            v[2].first = max(v[1].first,v[0].first);
            v[2].second = max(v[1].second,v[0].second);
            v[3].first = min(v[1].first,v[0].first);
            v[3].second = min(v[1].second,v[0].second);
            arr[v[2].first][v[2].second] = '*';
            arr[v[3].first][v[3].second] = '*';
        }
        else
        {
            v[2].first = min(v[1].first,v[0].first);
            v[2].second = max(v[1].second,v[0].second);
            v[3].first = max(v[1].first,v[0].first);
            v[3].second = min(v[1].second,v[0].second);
            // printf("%d %d %d %d\n",v[2].first,v[2].second,v[3].first,v[3].second);
            arr[v[2].first][v[2].second] = '*';
            arr[v[3].first][v[3].second] = '*';
        }
        
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++){
                printf("%c", arr[i][j]);
                
            }
            printf("\n");
        }
    }
    
}