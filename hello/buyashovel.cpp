#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    int c = n % 10;

    for (int i = 1; i <= 10; i++)
    {
        int d = (c * i);
        if ((d % 10) == 0 || (d % 10) == s)
        {
            printf("%d\n", i);
            return 0;
        }
    }


}