#include <bits/stdc++.h>
using namespace std;
void strCat(char x[], char y[])
{
    int z = strlen(y);
    printf("%d\n", z);
    int p = strlen(x);
    for (int i = 0; i < z; i++)
    {
        x[p + i] = y[i];
    }
    x[p + z] = 0;
}
void strRev(char x[])
{
    int y = strlen(x);
    for (int i = 0; i < y / 2; i++)
    {
        int temp = x[i];
        x[i] = x[y - i - 1];
        x[y - 1 - i] = temp;
    }
}
int strCom(char x[], char y[])
{
    int a = strlen(x);
    int b = strlen(y);

    for (int i = 0; i < max(a,b); i++)
    {
        if (x[i] > y[i])
        {
            return 3;
            // break;
        }
        else if (x[i] < y[i])
        {
            return 2;
            // break;
        }
    }
    return 1;
}
int f(char x[], char y[])
{
    
}
int main()
{
    char y[105], x[210];
    scanf("%s %s", x, y);
    // strCat(x,y);
    int a = strCom(x, y);
    printf("%s %s %d\n", x, y, a);
}