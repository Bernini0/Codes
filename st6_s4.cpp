#include <bits/stdc++.h>
using namespace std;
typedef struct info
{
    int a;
    int even;
    int odd;
}info;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        info arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i].even = 0;
            arr[i].odd = 0;
            scanf("%d", &arr[i].a);
            if(arr[i].a%2==1){
                arr[i].odd++;
            }
            else arr[i].even++;
            if(i>0){
                arr[i].odd += arr[i-1].odd;
                arr[i].even += arr[i-1].even;
            }
        }
        for (int i = 0; i < q; i++)
        {
            int l,r;
            scanf("%d %d", &l, &r);
            int a = arr[r-1].odd;
            int b = arr[r-1].even;
            // printf("1-->%d %d\n",a,b);
            if(l>1){
                a -= arr[l-2].odd;
                b -= arr[l-2].even;
            }
            // printf("2-->%d %d\n",a,b);
            long long int ans = ((a*(a-1))/2)*(long long int)b;
            long long int c = (long long int)b*(long long int)(b-1);
            c*= (long long int)(b-2);
            c/= 6;
            ans += c;
            printf("%lld\n",ans);
        }
        
    }
    
}