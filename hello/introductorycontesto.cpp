#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        int ans=1;

        scanf("%d", &n);
        int arr[n][6];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        for (int j = 0; j < 3; j++)
        {
            int max = 0;
            int min = 100000;
            int k=0,l,i;

            for (i = 0; i < n; i++)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
                
                if(arr[i][j+3]<min){
                    min = arr[i][j+3];
                }
            }
            
            ans = ans * abs(max-min);
            if(arr[k][j]>= min) {
                ans = 0;
            }
            k++;

        }
        printf("Case %d: %d\n",tc,ans);
    }

    return 0;
}