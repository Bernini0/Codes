#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+3);
        printf("%d\n",arr[2]+arr[1]);
    }
    
}