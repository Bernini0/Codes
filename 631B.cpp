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
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        bool one = false, minus = false,no = false;
        for (int i = 0; i < n; i++)
        {
            if(a[i] < b[i] && !one){
                no = true;
                break;
            }
            else if(a[i] > b[i] && !minus){
                no = true;
                break;
            }
            else if(a[i]==-1){
                minus = true;
            }
            else if(a[i]==1){
                one = true;
            }
        }
        if(no){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
        
    }
    
}