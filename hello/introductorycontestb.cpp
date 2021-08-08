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
        int a , b;
        if(n > 10){
            a = n-10;
            b = 10;
        }
        else
        {
            b = n;
            a = 0;
        }
        printf("%d %d\n", a, b);
    }
    
}