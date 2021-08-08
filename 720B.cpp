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
        int minimum = 2000000000;
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(minimum > arr[i]){
                minimum = arr[i];
                pos = i;
            }
        }
        int ans = minimum+1;
        printf("%d\n",n-1);
        for (int i = pos-1; i >= 0; i--)
        {
            printf("%d %d %d %d\n",pos+1,i+1,minimum,ans);
            ans++;
        }
        ans = minimum+1;
        for(int i = pos+1; i < n; i++){
            printf("%d %d %d %d\n",pos+1,i+1,minimum,ans);
            ans++;
        }
    }
    
}