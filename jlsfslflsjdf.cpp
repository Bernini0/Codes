#include <bits/stdc++.h>
using namespace std;
void lala(int x[],int s,int e,int m){
    int arr[e-s+1];
    int j = 0;
    int i = 0,k = 0;
    while (k < e-s+1)
    {
        int a = INFINITY, b = INFINITY;
        if(j <= m-s){
            a = x[s+j];
        }
        if(i <= e-m-1){
            b = x[m+1+i];
        }
        if(a <= b){
            arr[k] = a;
            j++;
        }
        else
        {
            arr[k] = b;
            i++;
        }
        k++;
    }
    for (int i = 0; i < e-s+1; i++)
    {
        x[s+i] = arr[i];
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    lala(arr,0,5,2);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
} 