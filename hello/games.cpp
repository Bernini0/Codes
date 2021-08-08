#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr1[i], &arr2[i]);
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr1[i]==arr2[j]){
                cnt++;
            }
        }
        
    }
    printf("%d\n",cnt);
    
    
}