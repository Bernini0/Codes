#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef struct info
{
    vector<pair<ll, ll>> points;
} info;
ll area(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c){
    return a.first*b.second+b.first*c.second+c.first*a.second-b.first*a.second-c.first*b.second-a.first*c.second;
}
int solve(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c, pair<ll, ll> d)
{
    vector<pair<ll, ll>> tmp1(4);
    tmp1[0] = a;
    tmp1[1] = b;
    tmp1[2] = c;
    tmp1[3] = d;
    vector<pair<ll, ll>> tmp(6);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == i)
                continue;

            for (int k = 0; k < 4; k++)
            {
                if (k == i || k == j)
                    continue;

                for (int l = 0; l < 4; l++)
                {
                    if (l == i || l == j || l == k)
                        continue;
                    tmp[0] = tmp1[i];
                    tmp[1] = tmp1[j];
                    tmp[2] = tmp1[k];
                    tmp[3] = tmp1[l];
                    tmp[4] = tmp[0];
                    tmp[5] = tmp[1];
                    bool not_zero = true,clockwise = true,anticlockwise = true;;
                    for (int m = 0; m < 4; m++)
                    {
                        ll val = area(tmp[m],tmp[m+1],tmp[m+2]);
                        if(val < 0)anticlockwise = false;
                        else if(val > 0)clockwise = false;
                        else not_zero = false;
                    }
                    if(!not_zero)return 0;
                    if((clockwise||anticlockwise) && not_zero)return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    // printf("hsadgf\n");
    while (scanf("%d", &n) == 1 && n > 0)
    {
        int cnt = 0;
        vector<pair<ll, ll>> v(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld %lld", &v[i].first, &v[i].second);
        }
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                for (int k = j + 1; k < n - 1; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        cnt += solve(v[i],v[j],v[k],v[l]);
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
}