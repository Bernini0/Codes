#include <bits/stdc++.h>
using namespace std;
bool ch_eck(string s)
{
    int n = (s[4] - 48) * 1000;
    n += (s[5] - 48) * 100;
    n += (s[6] - 48) * 10;
    n += (s[7] - 48);
    if (n < 2000)
        return false;
    if (s[0] == '0' && s[1] == '0')
        return false;
    if (s[2] == '0' && s[3] == '0')
        return false;
    if (s[0] > '3' || (s[0] == '3' && s[1] > '1'))
        return false;
    if (s[2] > '1' || (s[2] == '1' && s[3] > '2'))
        return false;
    if (s[0] == '3' && s[1] == '1' && s[2] == '1' && s[3] == '1')
        return false;
    if (s[0] == '3' && s[1] == '1' && s[2] == '0' && s[3] == '4')
        return false;
    if (s[0] == '3' && s[1] == '1' && s[2] == '0' && s[3] == '6')
        return false;
    if (s[0] == '3' && s[1] == '1' && s[2] == '0' && s[3] == '9')
        return false;
    if (s[0] == '3' && s[1] == '0' && s[2] == '0' && s[3] == '2')
        return false;
    if (s[0] == '3' && s[1] == '1' && s[2] == '0' && s[3] == '2')
        return false;
    if (s[0] == '2' && s[1] == '9' && s[2] == '0' && s[3] == '2')
    {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
            return true;
        else
            return false;
    }
    return true;
}
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        string s;
        s = s1 + s2 + s3;
        // cout << s << endl;
        sort(s.begin(), s.end());
        // vector<string>v;
        int ans_n;
        string ans;
        int cnt = 0;
        do
        {
            if (ch_eck(s))
            {
                int n = (s[4] - 48) * 1000 + (s[5] - 48) * 100 + (s[6] - 48) * 10 + (s[7] - 48);
                if (cnt == 0)
                {
                    ans = s;
                    ans_n = n;
                }
                else
                {
                    if (ans_n > n)
                    {
                        ans = s;
                        ans_n = n;
                    }
                    else if (ans_n == n)
                    {
                        int k = (s[2] - 48) * 10 + (s[3] - 48);
                        int l = (ans[2] - 48) * 10 + (ans[3] - 48);
                        if (k < l)
                        {
                            ans = s;
                            ans_n = n;
                        }
                        else if (k == l)
                        {
                            int p = (s[0] - 48) * 10 + (s[1] - 48);
                            int q = (ans[0] - 48) * 10 + (ans[1] - 48);
                            if (p < q)
                            {
                                ans = s;
                                ans_n = n;
                            }
                        }
                    }
                }

                cnt++;
            }
        } while (next_permutation(s.begin(), s.end()));

        if (cnt != 0)
        {
            cout << cnt << " " << ans[0] << ans[1] << " " << ans[2] << ans[3] << " " << ans[4] << ans[5] << ans[6] << ans[7] << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
}