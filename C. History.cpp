#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &v[i].first, &v[i].second);
    }
    sort(v.begin(),v.end());
    int a = v[0].first, b = v[0].second;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if(v[i].second < b){
            cnt++;
        }
        else
        {
            b = v[i].second;
        }
        
    }
    printf("%d\n",cnt);
}