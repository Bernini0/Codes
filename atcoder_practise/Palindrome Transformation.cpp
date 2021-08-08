#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    p--;
    if(p >=(n/2)){
        reverse(s.begin(),s.end());
        p = n-p;
    }
    vector<int>v;
    long long int ans = 0;
    for (int i = 0; i < (n/2); i++)
    {
        if(s[i] != s[n-1-i]){
            v.push_back(i);
            int pos1 = s[i]-96;
            int pos2 = s[n-1-i]-96;
            ans += min(26-max(pos1,pos2)+min(pos1,pos2),abs(pos1-pos2));
            // printf("%d %d\n",ans, i);
        }
    }
    v.push_back(p);
    v.push_back(100000000);
    v.push_back(-100000000);
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int i,j, k,l;
    for (i = 0; i < v.size(); i++)
    {
        if(v[i]==p){
            j = i-1;
            k = i+1;
            l  = i;
            break;
        }
    }
    long long int ans2 = ans;
    while (j> 0 || k < v.size()-1)
    {
        if(j > 0 && abs(v[j]-v[i]) <= abs(v[k]-v[i])){
            ans += abs(v[j]-v[i]);
            // printf("%d %d %d\n",ans,v[i],v[j]);
            i = j;
            j--;
        }
        else if(k < v.size()-1 && abs(v[j]-v[i]) > abs(v[k]-v[i])){
            ans += abs(v[k]-v[i]);
            // printf("%d %d %d\n",ans,v[i],v[k]);
            i = k;
            k++;
        }
    }
    k = l+1;
    j = l-1;
    i = l;
    while (j> 0 || k < v.size()-1)
    {
        if(j > 0 && abs(v[j]-v[i]) < abs(v[k]-v[i])){
            ans2 += abs(v[j]-v[i]);
            // printf("%d %d %d\n",ans,v[i],v[j]);
            i = j;
            j--;
        }
        else if(k < v.size()-1 && abs(v[j]-v[i]) >= abs(v[k]-v[i])){
            ans2 += abs(v[k]-v[i]);
            // printf("%d %d %d\n",ans,v[i],v[k]);
            i = k;
            k++;
        }
    }
    printf("%lld\n",min(ans,ans2));
}