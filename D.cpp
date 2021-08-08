#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n],arr2[m];
        for (int  i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr2[i]);
        }
        if(n <= m){
            printf("Yes\n");
       }
        else{
            printf("No\n");
        }
    }
    
}