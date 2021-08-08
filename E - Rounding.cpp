#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    scanf("%d", &p);
    vector<string>s(p);
    vector<int>v(p);
    int sum = 0;
    vector<pair<double,double>>ans(p);
    bool zero = false;
    for (int i = 0; i < p; i++)
    {
        cin >> s[i] >> v[i];
        sum += v[i];
        
        if(v[i]==0){
            ans[i].first = (double)v[i];
        }
        else if(v[i]==100){
            ans[i].second = (double)v[i];
        }
        else
        {

        }
        
    }
    for (int i = 0; i < p; i++)
    {
        double ans1 = (double)v[i]+100.0-(double)sum-(p-1)*0.49;
        double ans2 = (double)v[i]+100.0 - (double)sum + (p-1)*0.50;
    }
    
}