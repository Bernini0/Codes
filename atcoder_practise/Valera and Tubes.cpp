#include <bits/stdc++.h>
using namespace std;
int i = 1, j = 1;
int r = 0;
void lalala(int n, int m)
{
    if (j > m)
    {
        i++;
        r++;
        j = m;
    }
    if(j==0){
        i++;
        r++;
        j = 1;
    }
    if(i > n)return;
    if (r % 2 == 1)
    {
        printf(" %d %d", i, j);
        j--;
    }
    else
    {
        printf(" %d %d", i, j);
        j++;
    }
}
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int p  = k;
    while (k > 1)
    {
        k--;
        printf("2");
        lalala(n, m);
        lalala(n, m);
        printf("\n");
    }
    int c = n*m;
    c -= (2*(p-1));
    printf("%d", c);
    while (i <= n)
    {
        lalala(n,m);
    }
    
    
    printf("\n");
}