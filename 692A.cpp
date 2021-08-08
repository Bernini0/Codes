#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        int x = n - cnt;
        if (x < cnt)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}