#include <bits/stdc++.h>
using namespace std;
long long int answer(long long int a, long long int b)
{
    b = b-1;
    while (b--)
    {
        long long int c = a;
        vector< int > v;
        for (int i = 0; i < 18 && c > 0; i++)
        {
            v.push_back(c%10);
            c = c / 10;
        }
        sort(v.begin(),v.end());

        a += (v[0]*v[v.size()-1]);
        if(v[0]==0){
            break;
        } 
    }
    return a;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, k;
        scanf("%lld %lld", &n, &k);
        long long int ans = answer(n,k);
        printf("%lld\n",ans);

    }
}