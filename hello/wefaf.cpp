#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    int arr3[100001];
    memset(arr3,0,sizeof(arr3));
    int z;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        z =arr[i];
        arr3[z]=1;
        
    }
    int count = 0;
    for (int i = 0; i < 100001; i++)
    {
        if(arr3[i]==1)count++;
    }
    
    arr[n] = 0;
    int arr2[100001];
    memset(arr2, 0, sizeof(arr2));
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {

            int cnt = 0, cnt2 = 0;
            int a, c = 0;
            for (int j = i + 1; j <= n; j=j+c)
            {

                if ((arr[i] == arr[j]))
                {
                    arr[j] = 0;

                    if (cnt == 0)
                    {
                        cnt = (j - i) - cnt;
                        c = j - i;
                    }
                    else if (cnt != 0 && ((j - i) - cnt) == c)
                    {
                        cnt = (j - i);
                    }
                    else if (cnt != 0 && ((j - n) - cnt) != c)
                    {
                        cnt2 = 1;
                        break;
                    }
                }
            }

            if (cnt2 != 0)
            {
                arr[i] = 0;
            }
            a = arr[i];
            arr2[a] = c;
        }
    }
    sort(arr, arr + (n + 1));
    printf("%d\n",count);
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != 0 && arr[i]!=arr[i+1])
        {
            int b = arr[i];
            printf("%d %d\n", arr[i], arr2[b]);
        }
    }
}