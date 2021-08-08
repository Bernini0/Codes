#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, j, k;
        scanf("%d %d %d", &n, &j, &k);
        if(n/k >=j){
            printf("%d\n",j);
            continue;

        }
    
    else
    {
        int c = j-(n/k);
        int d = ceil((double)c/(k-1));
        int e = (n/k)-d;
        printf("%d\n",e);
    }
    }
    
    
}