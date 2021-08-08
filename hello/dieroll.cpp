#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int c = 6-max(n,m)+1;
    int b =6;
    for (int i = 1; i <= 6 ; i++)
    {
        if(b%i==0 && c%i==0){
            b = b/i;
            c = c/i;
        }
    }
    printf("%d/%d\n",c,b);
    
}