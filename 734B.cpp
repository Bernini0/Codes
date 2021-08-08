#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        cin >> s;
        int cnt[26];
        memset(cnt,0,sizeof(cnt));
        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i]-97]++;
        }
        int ans = 0, one = 0;
        for (int i = 0; i < 26; i++)
        {
            if(cnt[i] > 1){
                ans++;
            }
            else if(cnt[i]==1)one++;
        }
        ans += (one/2);
        printf("%d\n",ans);
    }
    
}