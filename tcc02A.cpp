#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int m, n, k;
        scanf("%d %d %d", &m, &n, &k);
        vector<string>v;
        string str;
        vector<string>v3;
        for (int i = 0; i < m; i++)
        {
            cin >> str;
            v.push_back(str);
            v3.push_back(str);
        }
        sort(v.begin(),v.end());
        v.push_back("11111");
        vector<pair<string, int>>v2;
        for (int i = 1; i < v.size();)
        {
            int cnt = 1;
            if(v[i]==v[i-1]){
                while (v[i]==v[i-1])
                {
                    cnt++;
                    i++;
                }
                v2.push_back({v[i-1],cnt});
                i++;
            }
            else
            {
                v2.push_back({v[i-1],cnt});
                i++;
            }
            
        }
        v.erase(unique(v.begin(),v.end()),v.end());
        vector<string> ans;
        int arr[v.size()];
        int j = 0;
        memset(arr,0,sizeof(arr));
        for (int i = 0; i < m; i++)
        {
            int idx = lower_bound(v.begin(),v.end(),v3[i])-v.begin();
            if(v2[idx].second >= k*k){
                string s1 = "3";
                s1 = v[idx]+s1;
                ans.push_back(s1);
            }
        }
       
    }
}