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
        int arr[2*n];
        int arr1[2*n];
        int a;
        int even = 0, odd = 0;
        for (int i = 0; i < 2*n; i++)
        {
            scanf("%d", &a);
            if(a%2==0){
                arr1[even] = i;
                even++;
            }
            else {
                arr[odd] = i;
                odd++;
            }
        }
        if(odd==2*n){
            odd = odd-2;
        }
        else if(odd%2==1){
            odd = odd-1;
            even = even -1;
        }
        
        else if(odd%2==0)
        {
            even = even -2;
        }
        
        for (int i = 0; i < odd; i+=2)
        {
            printf("%d %d\n",arr[i]+1,arr[i+1]+1);
        }
        for (int i = 0; i < even; i+=2)
        {
            printf("%d %d\n",arr1[i]+1,arr1[i+1]+1);
        }
        
        
    }
    
}
