#include <bits/stdc++.h>
using namespace std;
int bigmod(int a, int b){
    if(a==0)return 0;
    int product = 1;
    while (b > 0)
    {
        if(b&1){
            product*= a;
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
        int n;
        scanf("%d", &n);
        int arr[n];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum1 |= arr[i];
            int c = log2(arr[i]);
            c++;
            sum2 |= (bigmod(2,c)-1-arr[i]);
        }
        if(sum1 < sum2){
            int c = log2(sum2);
            c++;
            int d = bigmod(2,c)-1-sum2;
            c = log2(d);
            c++;
            int e = bigmod(2,c)-1-d;
            printf("%d %d\n",d,sum1&e);
        }
        else
        {
            printf("%d %d\n",sum1,sum1&sum2);
        }
    }
    
}