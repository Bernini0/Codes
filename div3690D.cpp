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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int i = 0;
        int j = n - 1;
        int cnt = 0;
        int a = arr[0];
        int b = arr[n - 1];
        while (i < j)
        {
            // printf("%d %d\n",a,b);
            if (a < b)
            {
                i++;
                a += arr[i];
                cnt++;
            }
            else if (a > b)
            {
                j--;
                b += arr[j];
                cnt++;
                // printf("%d ----- > %d\n",cnt, j);
            }
            else if (a == b)
            {
                bool no = false;
                for (int k = i + 1; k < j; k++)
                {
                    if (arr[k] != a)
                    {
                        no = true;
                        break;
                    }
                }
                if (!no)
                {
                    if ((i != 0 && j != n - 1))
                    {
                        cnt += 2;
                        if(j-i==1)cnt-=2;
                    }
                    break;
                }
                else if (no)
                {
                    cnt += 2;
                    i++;
                    j--;
                    a += arr[i];
                    b += arr[j];
                }
            }
        }
        printf("%d\n", cnt);
    }
}