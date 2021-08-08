#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        string s;
        cin >> s;
        int one = 0, zero = 0;
        if(s[0]=='1')one++;
        else zero++;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]=='1' && s[i-1]!= s[i])one++;
            else if(s[i]=='0' && s[i-1]!=s[i])zero++;
        }
        if(b >= 0){
            printf("%d\n", n*(a+b));
        }
        else{
            if(zero > one)swap(zero,one);
            zero++;
            int ans = n*a;
            ans += zero*b;
            printf("%d\n", ans);
        }    
    }
    
}