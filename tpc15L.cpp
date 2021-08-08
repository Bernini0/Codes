#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a,a+b});
    }
    sort(v.begin(),v.end());
    int a = 0;
    int ans = 1000000000;
    int b;
    while (a <= 480)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i].first-a < 0 && v[i].second-a < 0)continue;
            else if(v[i].first-a < 0 && v[i].second-a >= 0){
                cnt+= (v[i].second-a)/x;
                cnt++;
            }
            else{
                cnt+= ((v[i].second-a)/x) - ((v[i].first-a)/x);
                if((v[i].first-a)%x==0)cnt++;
            } 
            
        }
        if(cnt < ans){
            ans = cnt;
            b = a;
        }
        a++;
    }
    printf("%d %d\n",b, ans);
}