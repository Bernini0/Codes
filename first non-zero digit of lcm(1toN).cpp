#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
vector<pair<int, int>> factor;
void seive()
{
    int arr[(1000000 >> 6) + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i <= 1000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j < 1000000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= 1000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            prime.push_back(i);
        }
    }
}
void modified_factor(int n)
{
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
    {
        int m = n;
        int k = prime[i];
        int cnt = 0;
        while ((m/k) >0)
        {
            cnt++;
            m /= k;
        }
        
        if (cnt > 0)
        {
            factor.push_back(make_pair(cnt, prime[i]));
        }
    }
}
unsigned int bigmod(int a, int b)
{
    if(a > 10)a = a%10;
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        unsigned ret = ((bigmod(a, b / 2)%10) * (bigmod(a, b / 2)%10))%10;
        return ret;
    }
    else
    {
        return (a * (bigmod(a, b - 1)%10))%10;
    }
}
int main()
{
    seive();
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        factor.clear();
        modified_factor(n);
        unsigned int a = 1;
        // printf("%d\n",prime[2]);
        if (n >= 5)
        {
            factor[0].first -= factor[2].first;
        }
        if(n==1){
            printf("1\n");
            continue;
        }
        for (int i = 0; i < factor.size(); i++)
        {
            if (factor[i].second == 5)
            {
                continue;
            }
            else
            {
                a = ((a%10)*bigmod(factor[i].second, factor[i].first))%10;
                // printf("%d %d %u\n", factor[i].second,factor[i].first,a);
            }
        }
        printf("%u\n",a);
    }
}