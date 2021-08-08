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
        if (s[0] == ')' || s[s.size() - 1] == '(')
        {
            printf("NO\n");
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '?')
                {
                    cnt++;
                }
            }
            if (cnt % 2)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
}