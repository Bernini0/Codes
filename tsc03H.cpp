#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("hash.in", "r", stdin);
    freopen("hash.out", "w", stdout);
    int n;
    scanf("%d", &n);
    string s;
    vector<string>a;
    // a.push_back(s);
    for (int i = 0; i < 1000; i++)
    {
        s.push_back('a');
    }
    for (int i = 999; i > 0; i--)
    {
        s[i] = 'B';
        s[i-1] = 'b';
        a.push_back(s);
        s[i] = 'a';
        s[i-1] = 'a';
    }
    string s1 = s;
    s1[0] = 'b';
    s1[1] = 'C';
    s1[2] = 'B';
    a.push_back(s1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<endl;
    }
    
}