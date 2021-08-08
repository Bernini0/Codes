#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool powmod(ll n, ll a, ll b)
{
    if (a == 0)
        return false;
    ll product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
            if (product >= n)
                return true;
        }
        a *= a;
        b /= 2;
        if (a >= n && b != 0){
            return true;
        }
    }
    return false;
}
vector<int> ans[1000];
vector<int> arr;
int l = 0;
bool lal = false;
void generate(int n, int d, int pos, int k)
{

    if (pos == d)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            ans[l].push_back(arr[i]);
            // printf("%d ",arr[i]);
        }
        // printf("\n");
        l++;
        if (l == n)
        {
            lal = true;
            return;
        }
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            arr.push_back(i);
            generate(n, d, pos + 1, k);
            arr.pop_back();
            if (lal)
                break;
        }
    }
}
int main()
{
    ll n, k, d;
    scanf("%lld %lld %lld", &n, &k, &d);
    if(!powmod(n,k,d)){
        printf("-1\n");
    }
    else
    {
        generate(n, d, 0, k);
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", ans[j][i]);
            }
            printf("\n");
        }
    }
}