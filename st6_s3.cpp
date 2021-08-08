#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, l;
        scanf("%d %d %d", &n, &m, &l);
        int arr[n+1];
        for (int i = 0; i < m; i++)
        {
            int a;
            scanf("%d", &a);
            int b;
            for(int j = 0; j < a; j++){
                scanf("%d", &b);
                arr[b] = i;
            }
        }
        int cnt = 1;
        int ans[l];
        for (int i = 0; i < l; i++)
        {
            scanf("%d", &ans[i]);
        }
        for (int i = 1; i < l; i++)
        {
            if(arr[ans[i]]==arr[ans[i-1]])continue;
            else cnt++;
        }
        printf("%d\n",cnt);

    }
    
}