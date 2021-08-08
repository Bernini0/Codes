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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }
        if(sum >= n){
            printf("%d\n",sum-n);
        }
        else{
            printf("1\n");
        }
    }
    
}