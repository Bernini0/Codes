#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    double a = 1.0;
    for (int i = 1;; i++)
    {
        a *= ((n-i)*1.0/(n*1.0));
        double b = 1 - a;
        if((0.5-b <0.0)){
            printf("%d\n",i+1);
            break;
        }

    }
    
}