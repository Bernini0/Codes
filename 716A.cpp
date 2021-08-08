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
        bool no = false;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(abs((double)sqrt(arr[i]*1.0)-(int)(sqrt(arr[i]*1.0))) >= 1e-8){
                no = true;
            }
        }
        // sort(arr,arr+n);
        if(no){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}