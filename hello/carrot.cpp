#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, d;
    scanf("%d %d %d %d", &n, &t, &k, &d);
    double e =(double)n/k;
    e = ceil(e);
    if((d+t) < e*t){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}