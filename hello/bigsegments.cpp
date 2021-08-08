#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    scanf("%d", &n);
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    int min = 2000000000;
    int max = 0;
    int ans = 0;
    int temp;
    int tempmax;
    int minindex, maxindex;
    int v = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] <= min)
        {
            min = arr[i][0];
            minindex = i;
        }
        if (arr[i][1] >= max)
        {
            max = arr[i][1];
            maxindex = i;
        }
        temp =abs(arr[minindex][0] - arr[maxindex][1]);

        if (minindex == maxindex && temp >= ans)
        {
            ans = temp;
            tempmax = ans;
            v = maxindex;
        }
        else if (temp > ans)
        {
            tempmax = temp;
            
        }
    }
    if (tempmax == ans)
    {
        printf("%d\n", v + 1);
    }
    else
    {
        printf("-1\n");
    }
}