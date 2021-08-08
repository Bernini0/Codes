#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int,int>>v;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    int max = v[0].second;
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i].second < max){
            printf("Happy Alex\n");
            return 0;
        }
        else
        {
            max = v[i].second;
        }
        
    }
    printf("Poor Alex\n");
}