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
        int zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero++;
        }
        if (zero == 0)
        {
            printf("DRAW\n");
            continue;
        }
        if (zero == 1)
        {
            printf("BOB\n");
            continue;
        }
        if (zero % 2 == 1)
        {
            printf("ALICE\n");
        }
        else
        {
            printf("BOB\n");
        }
    }
}