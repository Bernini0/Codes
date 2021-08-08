#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> v;
    int a;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> s;
        int two = 0, one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '2')
                two++;
            else if (s[i] == '1')
                one++;
            else if (s[i] == '0')
                zero++;
        }
        if (two >= 2 && one >= 1 && zero >= 1)
        {
            v.push_back({a, i + 1});
        }
    }
    if (v.size() == 0)
    {
        printf("0\n");
    }
    else
    {
        sort(v.begin(), v.end());
        printf("%d\n", v[0].second);
    }
}