#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = 3 * a;
    b = 2 * b;

    int count = 1;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        count++;
    }

    printf("%d\n",count);
}