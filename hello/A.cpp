#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a>=b && a<=2*b){
            printf("%d\n", (2*b)*(2*b));
        }
        else if(a > b && a > 2*b){
            printf("%d\n",a*a);
        }
        else if(b>=a && b<=2*a){
            printf("%d\n", (2*a)*(2*a));
        }
        else if(b > a && b > 2*a){
            printf("%d\n",b*b);
        }
    }
    
}