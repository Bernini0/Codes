#include <bits/stdc++.h>
using namespace std;
bool f(int a, int b, int c){
    if(a <= b && b <= c)return true;
    if(a >= b && b >= c)return true;
    return false;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<int>v;
        int a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            v.push_back(a);
        }
        int ans = n+n-1+n-2+n-3;
        if(n ==1)ans = 1;
        if(n==2)ans = 3;
        if(n==3)ans = 6;
        for (int i = 0; i < n-2; i++)
        {
            if(v[i] <= v[i+1] && v[i+1] <= v[i+2])ans--;
            else if(v[i] >= v[i+1] && v[i+1] >= v[i+2])ans--;
        }
        for (int i = 0; i < n-3; i++)
        {
            if(f(v[i],v[i+1],v[i+2]))ans--;
            else if(f(v[i],v[i+1],v[i+3]))ans--;
            else if(f(v[i],v[i+2],v[i+3]))ans--;
            else if(f(v[i+1],v[i+2],v[i+3]))ans--;
        }
        printf("%d\n",ans);
    }
    
}