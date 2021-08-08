#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("concatenation.in", "r", stdin);
    freopen("concatenation.out", "w", stdout);
    string s1,s2;
    cin >> s1 >> s2;
    long long int a = s1.size();
    long long int b = s2.size();
    long long int ans = a*b;
    long long int cnt1[26], cnt2[26];
    memset(cnt1,0,sizeof(cnt1));
    memset(cnt2,0,sizeof(cnt2));
    for (int i = 1; i < s1.size(); i++)
    {
        cnt1[s1[i]-97]++;
    }
    // int cnt = 0;
    for (int i = 0; i < s2.size()-1; i++)
    {
        ans -= cnt1[s2[i]-97];
    }
    printf("%lld\n",ans);
}