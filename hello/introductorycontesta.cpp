#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int c = a+b;
        printf("Case %d: %d\n", tc, c);
    }
    

    return 0;
}