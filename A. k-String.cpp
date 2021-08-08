#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    scanf("%d", &k);
    string s;
    cin >> s;
    int cnt[26];
    memset(cnt,0,sizeof(cnt));
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]-97]++;
    }
    string ans;
    bool no = false;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i]%k==0){
            for (int j = 0; j < cnt[i]/k; j++)
            {
                ans.push_back(i+97);
            }
        }
        else
        {
            no = true;
            break;
        }
    }
    if(no){
        printf("-1\n");
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << ans;
        }
        printf("\n");
    }
    
}