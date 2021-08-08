#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[6][6];
    int ans[16];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int ansv;
    int l = 0;
    for (int i = 0; i < 4; i++)
    {
        int j = 0;
        while (j < 4)
        {
            ansv = 0;
            for (int k = 0 + j; k < 3 + j; k++)
            {
                if (k-j == 1)
                {
                    ansv += arr[i][k] + arr[i + 1][k] + arr[i + 2][k];
                    
                }
                else
                {
                    ansv += arr[i + 2][k]+arr[i][k];
                }
            }
            j++;
            ans[l] = ansv;
            l++;
        }
    }
    sort(ans,ans+16);
    printf("%d\n",ans[15]);
}