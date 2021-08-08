#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,d, e;
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    int f = (c-a)*60;
    f +=(d-b);
    int g = f - e;
    printf("%d\n", g);
}