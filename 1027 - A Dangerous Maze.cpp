#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc =1; tc<= t;tc++)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;;
        int c;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            sum += abs(c);
            if(c<0){
                cnt++;
            }
        }
        if(n==cnt){
            printf("Case %d: inf\n",tc);
        }
        else{
            int d = __gcd(sum,n-cnt);
            sum /= d;
            n = n-cnt;
            n /= d;
            printf("Case %d: %d/%d\n",tc,sum,n);
        }
    }
}