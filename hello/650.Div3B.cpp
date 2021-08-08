#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,even,odd;
        scanf("%d", &n);
        if(n%2==1){
            even = n/2+1;
            odd = n-even;
        }
        else
        {
            even = n/2;
            odd = n-even;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]%2==0) even--;
            else odd--;
        }
        if(odd!=0 || even !=0){
            printf("-1\n");
            
        }
        
        else
        {   int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%2==1 && i%2!=1){
                    cnt++;
                }
            }
            printf("%d\n",cnt);
            
        }
        
        
        
    }
    
}