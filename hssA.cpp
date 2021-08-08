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
        int b = n%10;
        int a = n/10;
        if(b==9)a++;
        printf("%d\n",a);
    }
    
}