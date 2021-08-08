#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll bigmod(ll a, ll b){
    if(b==0)return 1;
    else if(b%2==0){
        ll ret = bigmod(a,b/2);
        return ret * ret;
    }
    else
    {
        return a*bigmod(a,b-1);
    }
    
}

int main()
{
    string n;
    cin >> n;
    int cnt = 0;
    ll a = 0;
    for (int i = n.size()-1; i >= 0; i--)
    {
        a *= bigmod(10,i-n.size()-1);
        a += (n[i]-48);
    }
    printf("%lld\n",a);
    for (int i = 0; i < n.size(); i++)
    {
        if(n[i]=='3'){
            continue;
        }
        else if(n[i]=='6'){
            continue;
        }
        else if(n[i]=='9'){
            continue;
        }
        else if(i!=n.size()-1 && n[i]=='1' && (n[i+1]=='2' || n[i+1]=='5' || n[i+1]=='8')){
            i++;
            continue;
        }
        else if(n[i]=='2' && i !=n.size()-1 &&(n[i+1]=='1' || n[i+1]=='4' || n[i+1]=='7')){
            i++;
            continue;
        }
        else
        {
            cnt++;
        }
        
    }
    if(cnt == n.size()){
        printf("-1\n");
    }
    else
    {
        printf("%d\n",cnt);
    }
    
}