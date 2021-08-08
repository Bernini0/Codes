#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }

        long long int sum = 0;
        long long int j = 0;
        bool no = false;
        for (int i = 0; i < n; i++)
        {
            sum += (arr[i] - j);
            if (sum < 0)
                no = true;
            j++;
        }
        if (no)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}