#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int arr[10];
        arr[0] = 1;
        for (int i = 1; i < 10; i++)
        {
            arr[i] = arr[i-1]*10;
        }
        int a = 0, b = 0;
        for (int i = 9; i >= 0; i--)
        {
            a += (l/arr[i]);
            b += (r/arr[i]);
        }
        printf("%d\n",b-a);
    }
    
}