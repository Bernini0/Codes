#include <bits/stdc++.h>
using namespace std;
vector<string> v;
string a;
void func(int idx)
{
    if (idx == 3)
    {
        // v.push_back(a);
        return;
    }
    else
    {
        if (idx > 0)
        {
            for (int i = 0; i < 26; i++)
            {
                a.push_back('a' + i);
                v.push_back(a);
                func(idx + 1);
                a.pop_back();
            }

            // func(idx + 1);
        }
        else
        {
            for (int i = 0; i < 26; i++)
            {
                a.push_back('a' + i);
                v.push_back(a);
                func(idx + 1);
                a.pop_back();
            }
        }
    }
}
bool compare_func(string c, string b)
{
    if (c.size() != b.size())
        return c.size() < b.size();
    if (c.compare(0, b.size(), b) == 0 || b.compare(0, c.size(), c) == 0)
        return c.size() < b.size();
    else
        return c < b;
}
int main()
{
    int t;
    scanf("%d", &t);
    func(0);
    // printf("%ld\n", v.size());

    sort(v.begin(), v.end(), compare_func);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    // cout << v[v.size()-1] <<endl;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string s;
        cin >> s;
        bool vis[v.size()];
        memset(vis, false, sizeof(vis));
        for (int j = 0; j < s.size(); j++)
        {
            vis[s[j] - 97] = true;
        }

        bool no = false;
        for (int i = 0; i < 26; i++)
        {
            if (!vis[i])
            {
                cout << v[i] << endl;
                no = true;
                break;
            }
        }
        if (no)
        {
            continue;
        }

        for (int i = 26; i < 702; i++)
        {
            no = false;
            for (int j = 0; j < s.size() - 1; j++)
            {
                if (v[i][0] == s[j] && v[i][1] == s[j + 1])
                {
                    vis[i] = true;
                    no = true;
                    break;
                }
            }
            if (!no)
            {
                cout << v[i] << endl;
                break;
            }
        }
        if (!no)
            continue;

        for (int i = 702; i < v.size(); i++)
        {
            no = false;
            for (int j = 0; j < s.size() - 2; j++)
            {
                if (v[i][0] == s[j] && v[i][1] == s[j + 1] && v[i][2] == s[j + 2])
                {
                    vis[i] = true;
                    no = true;
                    break;
                }
            }
            if (!no){
                cout << v[i] <<endl;
                break;
            }
        }
    }
}