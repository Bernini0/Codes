#include <bits/stdc++.h>
using namespace std;
bool intersect_check(pair<int,int>a,pair<int,int>b){
    if(a.second < b.second && a.second > b.first)return true;
    return false;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int x, y;
        bool vis[2*n+1];
        memset(vis,false,sizeof(vis));
        vector<pair<int,int>>chord;
        for (int i = 0; i < k; i++)
        {
            scanf("%d %d", &x, &y);
            if(x > y)swap(x,y);
            chord.push_back({x,y});
            vis[x] = vis[y] = true;
        }
        vector<int>new_chord;
        for (int i = 1; i <= 2*n; i++)
        {
            if(!vis[i]){
                new_chord.push_back(i);
                // printf("%d\n",i);
            }
        }
        for (int i = 0; i < new_chord.size()/2; i++)
        {
            chord.push_back({new_chord[i],new_chord[(new_chord.size()/2)+i]});
        }
        sort(chord.begin(),chord.end());
        // for (int i = 0; i < chord.size(); i++)
        // {
        //     printf("%d %d\n",chord[i].first,chord[i].second);
        // }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = i+1;j < n; j++){
                if(intersect_check(chord[i],chord[j])){
                    cnt++;
                    // printf("%d %d %d %d\n",chord[i].first,chord[i].second,chord[j].first,chord[j].second);
                }
            }
        }
        printf("%d\n",cnt);
    }
    
}