#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    string a;
    cin >> a;
    int c = a[a.size()-2]-'0';
    c*=10;
    c+= a[a.size()-1]-'0';
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        a.clear();
        cin >> a;
        int d = a[a.size()-2]-'0';
        d*=10;
        d+= a[a.size()-1]-'0';
        c+= d;
        if(c%100==0)continue;
        else{
            c %= 100;
            cnt++;
        }
    }
    printf("%d\n",cnt);
}