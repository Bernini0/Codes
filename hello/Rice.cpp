#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c, d;
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
        if(n*(a+b)<(c-d)){
            printf("NO\n");
        }
        else if(n*(a-b)>(c+d)){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    
}