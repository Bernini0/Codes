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
        pair<int,int>arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i].first = 0;
            arr[i].second = 0;
            if(i > 0){
                arr[i].first += arr[i-1].first;
                arr[i].second += arr[i-1].second;
            }
            if(s[i]=='D'){
                arr[i].first++;
            }
            else arr[i].second++;
        }
        map<pair<int,int>,int>mp;
        int ans[n];
        ans[0] = 1;
        if(s.size() > 1){

            if(s[0]==s[1])ans[1] = 2;
            else{
                ans[1] = 1;
                mp.insert({{1,1},1});
            }
        }
        
        for (int i = 2; i < n; i++)
        {
            int a = arr[i].first;
            int b = arr[i].second;
            if(a==0 || b==0){
                ans[i] = i+1;
                continue;
            }
            int c = __gcd(a,b);
            a/=c;
            b/=c;
            auto it = mp.find({a,b});
            int cnt = 1;
            if(it==mp.end()){
                ans[i] = cnt;
                mp.insert({{a,b},1});
            }
            else{
                cnt += mp[{a,b}];
                mp[{a,b}] = cnt;
                ans[i] = cnt;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
    
}