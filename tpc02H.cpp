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
        int tax[n],policy[n];
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &tax[i]);
        }
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &policy[i]);
        }
        int ans1 = arr[0], ans2 = arr[0];
        for (int i = 1; i < n; i++)
        {
            ans1 = ans1+arr[i]-(policy[i]*tax[i]);
            if(ans1 > ans2){
                ans2 = ans1;
            }
        }
       
        printf("%d\n",ans2);
    }
    
}