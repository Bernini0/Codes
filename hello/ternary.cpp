#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string str;
        cin >> str;
        int temp = 1000000000, ans = 0;
        int l = -1, m = -1, n = -1;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                l = i + 1;
            }
            if (str[i] == '2')
            {
                m = i + 1;
            }
            if (str[i] == '3')
            {
                n = i + 1;
            }
            if (l > 0 && m > 0 && n > 0)
            {
                int d = min(l, m);
                d = min(d, n);
                int e = max(m, n);
                e = max(e, l);
                ans = e - d + 1;
                
            }
            if (ans < temp && ans != 0)
            {
                temp = ans;
            }
        }
        if (ans == 0)
        {
            printf("%d\n", ans);
        }
        else
        {

            printf("%d\n", temp);
        }
    }
}