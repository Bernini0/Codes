#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    scanf("%d %d %d", &n, &b, &d);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
        {
            continue;
        }
        else
        {

            c += arr[i];

            if ((double)c / d > 1)
            {
                cnt++;
                c = 0;
            }
        }
    }
    printf("%d\n", cnt);
}