#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (scanf("%d", &t) && t !=0)
    {
        int tc;
        vector<int> v;
        int a = t;
        v.push_back(0);
        while (scanf("%d", &tc)&tc != 0)
        {
            v.push_back(tc-a);
        }
        
        int ans = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            ans = __gcd(ans,abs(v[i]));
        }
        printf("%d\n",ans);
    }
    
}