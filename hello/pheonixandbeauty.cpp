#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int num[101];
        memset(num, 0, sizeof(num));
        int arr[n], l = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            if (num[arr[i]] == 0)
            {
                l++;

                num[arr[i]] = arr[i];
            }
        }
        vector<int> v;
        for (int i = 0; i < 101; i++)
        {
            if (num[i] != 0)
            {
                v.push_back(num[i]);
            }
        }

        int j = 1;
        if (l > k)
        {
            printf("-1\n");
            continue;
        }
        else
        {
            printf("%d\n", n * k);
            while (n > 1)
            {

                for (int i = 0; i < v.size(); i++)
                {
                    printf("%d ", v[i]);
                }
                if (v.size() < k)
                {
                    for (int i = 0; i < k - v.size(); i++)
                    {
                        printf("1 ");
                    }
                }
                n--;
            }
            if (v.size() < k)
            {
                for (int i = 0; i < v.size(); i++)
                {
                    printf("%d ", v[i]);
                }

                for (int i = 1; i < k - v.size(); i++)
                {
                    printf("1 ");
                }
                printf("1\n");
            }
            else
            {
                for (int i = 0; i < v.size()-1; i++)
                {
                    printf("%d ",v[i]);
                }
                
                printf("%d\n",v[v.size()-1]);
            }
        }
    }
}