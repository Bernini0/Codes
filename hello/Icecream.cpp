#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    getchar();
    char c;
    long long int d;
    long long int cnt = 0;
    while (n--)
    {
        scanf("%c %lld", &c, &d);
        getchar();
        if(c=='+'){
            m = d+m;
        }
        else if(c=='-' && d>m){
            cnt++;
        }
        else if(c=='-'&& m>=d){
            m = m-d;
        }
    }

    printf("%lld %lld\n",m, cnt);
    
}