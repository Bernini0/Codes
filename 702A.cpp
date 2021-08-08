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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n-1; i++)
        {
            int a = max(arr[i],arr[i+1]);
            int b = min(arr[i],arr[i+1]);
            while (a > 2*b)
            {
                cnt++;
                b+= b;
            }
            
        }
        
        printf("%d\n",cnt);
    }
    
}