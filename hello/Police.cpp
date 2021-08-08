#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt = 0, l=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==-1){
            l = i;                
            cnt++;
        }
        else
        {
            break;
        }
        
    }
    int d =0;
    for (int i = l+1; i < n; i++)
    {
        d += arr[i];
        if(d < 0){
            d = 0;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    
    
}