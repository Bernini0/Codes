#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        int even =0, odd =0;
        scanf("%d %d", &n, &x);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]%2==0){
                even++;
            }
            else
            {
                odd++;
            }
            
        }
        if(odd ==0){
            printf("NO\n");
        }
        else if(even==0 && x%2!=0){
            printf("YES\n");
        }
        else if(even==0 && x%2==0){
            printf("NO\n");
        }
        else if(even >=x-1){
            printf("YES\n");
        }
        else if((x-even)%2==1 && odd >= (x-even)){
            printf("YES\n");
        }
        else if((x-even)%2==0 && odd > (x-even)){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    
}