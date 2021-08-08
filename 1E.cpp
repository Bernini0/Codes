#include <bits/stdc++.h>
using namespace std;
int arr[2000000 + 1];
long long int maximum = -1;
vector<pair<long long int, long long int>> v;
bool ya(int a, int b, int k)
{
    // printf("shfsadf\n");
    if (k % 2 == 0)
        return false;
    if (k < maximum)
        return false;
    else
    {
        int j = 1;
        // printf("%d\n",k);
        for (int i = a; i <= (a + b) / 2; i++)
        {
            if (arr[i] < j)
            {
                return false;
            }
            j++;
        }
        j -= 2;
        for (int i = (a + b) / 2 + 1; i <= b; i++)
        {
            if (arr[i] < j)
            {
                return false;
            }
            j--;
        }
        long long int ans = 0;
        // printf("jsdfs\n");
        j = 1;
        for (int i = a; i <= a + (k / 2); i++)
        {
            ans += (arr[i] - j);
            j++;
        }
        j -= 2;
        for (int i = a + (k / 2) + 1; i <= b; i++)
        {
            ans += (arr[i] - j);
            j--;
        }
        maximum = k;
        v.push_back({k, ans});
        // printf("%d\n",k);
    }
    return true;
}
void f(int a, int b, int k)
{
    if (a > b)
        return;
    if(k < maximum)return;
    if (!ya(a, b, k))
    {
        f(a + 1, b, k - 1);
        f(a, b - 1, k - 1);
    }
    else
    {
        return;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        maximum = -1;
        v.clear();
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        f(0, n - 1, n);
        long long int ans;
        if (v.empty())
        {
            printf("0 0\n");
        }
        else
        {
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            ans = v[0].first;
            long long int mini = 10000000000000;
            int i = 0;
            while (v[i].first == ans)
            {
                mini = min(mini, v[i].second);
                i++;
            }
            printf("%lld %lld\n", ans, mini);
        }
    }
}