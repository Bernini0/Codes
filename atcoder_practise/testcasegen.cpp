#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,ans=0;
    cin>>n>>p;
    string s;
    cin>>s;
    int l=n+5,r=-1;
    if(p>n/2)
    {
        reverse(s.begin(),s.end());
        p=n-p+1;
    }
    for(int i=0;i<(int) s.size()/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            l=min(l,i+1);
            r=max(i+1,r);
        }
    }
    r=max(p,r);
    l=min(p,l);
    if(l>=1 && l<=p && r>=p && r<=n/2)
    {
        for(int i=p;i>=l;i--)
        {
            int x = abs(s[i-1] - s[n-i]);
            x = min (x, 26-x);
            ans+=x;
        }
        for(int i=p+1;i<=r;i++)
        {
            int x = abs(s[i-1] - s[n-i]);
            x= min (x, 26-x);
            ans+=x;
        }
        ans+=(min(2*abs(p-l),2*abs(p-r)));;
        ans+=max(abs(p-l),abs(p-r));
    }
    cout<<ans<<endl;
    return 0;
}