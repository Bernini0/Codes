#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int x[n], y[n];
        long long int sumx = 0, sumy = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld %lld", &x[i], &y[i]);
            sumx += x[i];
            sumy += y[i];
        }
        long long int ax = sumx / n;
        long long int ay = sumy / n;
        vector<long long int> arr;

        for (long long int i = ax - 100; i <= ax + 100; i++)
        {
            for (long long int j = ay - 100; j <= ay + 100; j++)
            {
                long long int v = 0;

                for (int k = 0; k < n; k++)
                {
                    v += abs(x[k] - i) + abs(y[k] - j);
                    // printf("%lld-%lld-->%lld\n",i,j,arr[l]);
                }
                arr.push_back(v);
            }
        }
        sort(arr.begin(), arr.end());
        int cnt = 1;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
                cnt++;
            else
                break;
        }
        printf("%d %lld\n", cnt,arr[0]);
    }
}