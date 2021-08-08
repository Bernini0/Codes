#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d, h;
        scanf("%d %d %d", &n, &d, &h);
        int sum = 0;
        int arr[n];
        bool yes = false;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==0){
                sum = max(sum-d,0);
            }
            else sum+= arr[i];
            if(sum > h){
                yes = true;
            }
        }
        if(yes){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    
}