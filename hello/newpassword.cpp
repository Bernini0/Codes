#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int p = 1;
    for (int i = 0; p <=n; i++)
    {
        if(i==k){
            i = 0;
        }
        printf("%c",i+97);
        p++;
    }
    printf("\n");
}