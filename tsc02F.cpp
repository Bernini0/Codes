#include <bits/stdc++.h>
using namespace std;
double pi = 2*acos(0.0);
int main()
{
    int t;
    cin>>t;
    while(t--){
        long double a, r, n;
        cin>>a>>r>>n;
        long double x=0, y=0;
        long double angle=0;
        while(n--){
            //cout<<x<<" "<<y;
            x+= r*cos(angle*(pi/180)), y+= r*sin(angle*(pi/180));
            //cout<<x<<" "<<y;
            angle+=(long double)a;
        }
        cout<<x<<" "<<y<<"\n";
    }
}