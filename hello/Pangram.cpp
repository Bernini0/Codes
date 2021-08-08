#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    char c;
    getchar();

    int cnt[26];
    memset(cnt,0,sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &c);
        if (c >= 65 && c <= 90)
            cnt[c - 65]++;
        else
            cnt[c - 97]++;
    }
    if (n < 26)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] == 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
}