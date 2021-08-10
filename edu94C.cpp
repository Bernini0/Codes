#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        int x;
        cin >> s >> x;
        int n = s.size();
        string ans;
        ans = s;
        for (int i = 0; i < n; i++)
        {
            ans[i] = '1';
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i - x >= 0)
                {
                    ans[i - x] = '0';
                }
                if (i + x < n)
                {
                    ans[i + x] = '0';
                }
            }
        }
        bool no = false;
        string s2;
        for (int i = 0; i < n; i++)
        {
            if(i-x>=0 && ans[i-x]=='1'){
                s2.push_back('1');
            }
            else if(i+x < n && ans[i+x]=='1'){
                s2.push_back('1');
            }
            else s2.push_back('0');
            if(s2[i]!=s[i]){
                no = true;
                break;
            }
        }
        if (no)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}