#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    vector<string>v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    long long int ans = 1;
    int mod = 1000000000+7;
    for (int i = 0; i < m; i++)
    {
        long long int cnt = 0;
        string s1;
        for(int j = 0; j < n; j++)
        {
            s1.push_back(v[j][i]);
        }
        // cout << s1 <<endl;
        sort(s1.begin(),s1.end());
        s1.erase(unique(s1.begin(),s1.end()),s1.end());
        cnt = s1.size();
        // printf("%lld\n",cnt);
        ans*= cnt;
        ans%= mod;
    }
    printf("%lld\n",ans);
}