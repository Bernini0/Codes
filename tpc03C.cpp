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
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='a')a++;
            else b++;
        }
        a = min(a,b);
        printf("%d\n", a);
    }
    
}