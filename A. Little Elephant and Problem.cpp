#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }
    sort(arr2,arr2+n);
    int cnt = 0;
    int a = -1, b = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr2[i] != arr[i]){
            cnt++;
            if(cnt == 1){
                a = i;
            }
            else if(cnt==2){
                b = i;
            }
        }
    }
    if(cnt==0){
        printf("YES\n");
    }
    else if(cnt==2 && arr2[a]==arr[b]){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}