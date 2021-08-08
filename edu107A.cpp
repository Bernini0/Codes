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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==2)continue;
            else cnt++;
        }
        printf("%d\n",cnt);
    }
    
}