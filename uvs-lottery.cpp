#include <bits/stdc++.h>
using namespace std;
int s1;
long long int n, m;
void inclusion_exclusion_recursive(int pos, long long int value, int koyta, int arr[])
{
    if (pos >= m)
    {
        if (koyta % 2)
        {
            s1 += n / value;
        }
        else
        {
            s1 -= n/value;
        }
    }
    inclusion_exclusion_recursive(pos+1,value*1ll*arr[pos],koyta+1,arr);
    inclusion_exclusion_recursive(pos+1,value,koyta,arr);
}
long long int inclusion_exclusion_iterative(long long int arr[])
{
    long long int sum = 0;
    for (int i = 1; i < (1 << m); i++)
    {
        long long int multi = 1;
        int bits = 0;
        for(int j = 0; j < m; j++){
            if(i & (1 << j)){
                bits++;
                int d = __gcd(multi,arr[j]);
                multi /=d;
                multi*= arr[j];
            }
        }
        long long int cur = n/multi;
        if(bits%2){
            sum += cur;
            // printf("%d\n",sum);
        }
        else{
            sum -= cur;
            // printf("%d\n",sum);
        }
    }
    return n-sum;
}
int main()
{

    while (scanf("%d %d", &n, &m) == 2)
    {
        s1 = 0;
        long long int arr[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%lld", &arr[i]);
        }
        // inclusion_exclusion_recursive(0,1ll,0,arr);
        long long int ans = inclusion_exclusion_iterative(arr);
        printf("%lld\n",ans);
    }
}