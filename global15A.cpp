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
        string s2;
        s2 = s;
        sort(s2.begin(),s2.end());
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!=s2[i])cnt++;
        }
        printf("%d\n",cnt);
    }
    
}