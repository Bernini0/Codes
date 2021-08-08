#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int k;
//         scanf("%d", &k);
//         int a = k;
//         int b = 100-k;
//         if(b==0){
//             printf("1\n");
//             continue;
//         }
//         int c = __gcd(a,b);
//         a/=c;
//         b/=c;
//         printf("%d\n",a+b);
//     }
    
// }
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n+1],arr2[n+1];
        arr[0] = 0;
        arr2[0] = 0;
        for(int i= 1; i <= n; i++){
            scanf("%d", &arr[i]);
            arr2[i] = arr[i];
        }
        sort(arr,arr+n+1);
        bool no = false;
        for (int i = 1; i <= n; i++)
        {
            if(arr[i]!= arr2[i]){
                no = true;
                break;
            }
        }
        if(no){
            if(arr2[1]==1 || arr2[n]==n){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
        else{
            printf("0\n");
        }
    }
    
}