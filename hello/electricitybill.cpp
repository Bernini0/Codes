#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    while (scanf("%d", &n)==1 && n !=0)
    {
        n= n-1;
        int a,b,c,e;
        scanf("%d %d %d %d", &a, &b, &c, &e);
        ll cnt = 0;
        ll ans = 0;
        while(n--){
            int d,m,y,amount;
            scanf("%d %d %d %d", &d, &m, &y, &amount);
            if(((d-a==1) && (m-b==0) && (y-c==0)) || ((m-b)==1 && y-c==0 &&(((d-a)==-29 &&(b==4 || b == 6 || b==9 || b==11)) || ((d-a==-30) &&(b==1 || b == 3 || b == 5 || b== 7 || b == 8 || b==10 || b == 12)) || (d-a== -27 && b==2 && ((c%4!=0 || c%100==0) && c%400 !=0)) || (d-a== -28 && b==2 && ((c%4==0 && c%100!=0) || c%400 ==0)))) || (d-a==-30 && m-b==-11 && y-c==1)){
                ans += amount-e;
                cnt++;
            }
            a = d;
            b = m;
            c = y;
            e = amount;
        }
        printf("%lld %lld\n",cnt, ans);
    }
    
}