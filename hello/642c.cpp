#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;

        scanf("%lld", &n);
       
       if (n == 1) {
           cout << 0 << endl;
           continue;
       }


       ll tot = 1;
        ll totMove = 0;
       for(ll level = 1; ; level++){
           ll guti = level * 8;
           ll moveofthelevel = guti * level;
            totMove += moveofthelevel;

            tot += guti;

            if(tot == n*n) break;
       } 

       cout << totMove << endl;
    }
    
}