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
        sort(s.begin(),s.end());
        cout << s <<endl;
    }
    
}