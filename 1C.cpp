#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a, b;
    cin >> a >> b;
    int cnt1[26];
    memset(cnt1, 0, sizeof(cnt1));
    for (int i = 0; i < a.size(); i++)
    {
        cnt1[a[i] - 97]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (cnt1[b[i] - 97] != 0)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}