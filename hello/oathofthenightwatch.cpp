#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[0] && arr[i] < arr[n-1])cnt++;
    }
    printf("%d\n", cnt);
    
}