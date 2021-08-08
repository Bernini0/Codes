#include <bits/stdc++.h>
using namespace std;
int bigmod(int a, int b){
    if(a==0)return 0;
    int product = 1;
    while (b > 0)
    {
        if(b&1){
            product *= a;
            b--;
        }
        a*=a;
        b/=2;
    }
    return product;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, q, k;
        scanf("%d %d %d", &n, &q, &k);
        int arr[n];
        int arr2[n][32];
        int a;
        memset(arr2,0,sizeof(arr2));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        a = arr[0];
        int p = 0;
        while (a >= 1)
        {
            if (a % 2 == 1)
            {
                arr2[0][p]++;
            }
            p++;
            a /= 2;
        }
        for (int i = p; i < 32; i++)
        {
            arr2[0][i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            a = arr[i];
            int j = 0;
            while (a >= 1)
            {
                if (a % 2 == 1)
                {
                    arr2[i][j] = arr2[i - 1][j] + 1;
                    j++;
                }
                else
                {
                    arr2[i][j] = arr2[i-1][j];
                    j++;
                }
                
                a /= 2;
            }
            for (int r = j; r < 32; r++)
            {
                arr2[i][r] = arr2[i - 1][r];
            }
        }
        while (q--)
        {
            int l , r;
            scanf("%d %d", &l, &r);
            l--;
            r--;
            if(l > 0){
                // int l = 0;
                int x = 0;
                for (int i = 0; i < 32; i++)
                {
                    if(arr2[r][i]-arr2[l-1][i]> 0){
                        // printf("%d-->%d %d\n",i,arr2[r][i],arr2[l-1][i]);
                        x+= bigmod(2,i);
                    }
                    // printf("%d--->%d %d\n",i,arr2[l-1][i],arr2[r][i]);
                }
                printf("%d\n",k|x);
            }
            else
            {
                int l = 0;
                for (int i = 0; i < 32; i++)
                {
                
                    if(arr2[r][i]> 0){
                        // printf("%d-->%d\n",i,arr2[r][i]);
                        l+= bigmod(2,i);
                    }
                    
                }
                // printf("%d\n",l);
                printf("%d\n",k|l);
            }
            
        }
        
    }
}