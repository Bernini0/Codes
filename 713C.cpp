#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        bool no = false;
        int n = s.size();
        for (int i = 0; i <= s.size() / 2; i++)
        {
            if (s.size() % 2 == 1 && i == s.size() / 2)
            {
                if (s[i] == '0')
                    a--;
                else if (s[i] == '1')
                    b--;
                continue;
            }
            if(n%2==0 && i == n/2)break;
            if (s[i] == s[n - 1 - i] && s[i]!='?')
            {
                if (s[i] == '0')
                    a -= 2;
                else
                    b -= 2;
            }
            if (s[i] != s[n - 1 - i])
            {
                if (s[n - 1 - i] == '?')
                {
                    s[n - 1 - i] = s[i];
                    if (s[i] == '0')
                        a -= 2;
                    else
                        b -= 2;
                }
                else if (s[i] == '?')
                {
                    s[i] = s[n - 1 - i];
                    if (s[i] == '0')
                        a -= 2;
                    else
                        b -= 2;
                }
                else
                {
                    no = true;
                }
            }
        }
        // cout << s << endl;
        // cout << a << " " << b << endl;
        if (a < 0 || b < 0)
            no = true;
        if (!no)
        {
            for (int i = 0; i < s.size() / 2; i++)
            {
                if (s[i] == '?')
                {
                    if (a >= 2)
                    {
                        a -= 2;
                        s[i] = s[n - 1 - i] = '0';
                    }
                    else
                    {
                        b -= 2;
                        s[i] = s[n - 1 - i] = '1';
                    }
                }
            }
            if (n % 2 == 1 && s[n / 2] == '?')
            {
                if (a > 0)
                {
                    a--;
                    s[n / 2] = '0';
                }
                else
                {
                    b--;
                    s[n / 2] = '1';
                }
            }
            if (a < 0 || b < 0)
                no = true;
            if (no)
            {
                printf("-1\n");
            }
            else
            {
                cout << s << endl;
            }
        }
        else
        {
            printf("-1\n");
        }
    }
}