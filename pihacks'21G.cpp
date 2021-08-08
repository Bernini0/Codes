#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    int x[16];
    x[0] = 0;
    x[1] = 1;
    x[2] = 4+x[0];
    x[3] = 1+x[2];
    x[4] = 5+x[3];
    x[5] = 9+x[4];
    x[6] = 2+x[5];
    x[7] = 6+x[6];
    x[8] = 5+x[7];
    x[9] = 3+x[8];
    x[10] = 5+x[9];
    x[11] = 8+ x[10];
    x[12] = 9 +x[11];
    x[13] = 7 + x[12];
    x[14] = 9 + x[13];
    x[15] = 3 + x[14];
    while (t--)
    {
        int i;
        scanf("%d", &i);
        printf("%d\n",x[i]);
    }
    
}