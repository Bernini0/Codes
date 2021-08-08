#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if(x%2==1){
            printf("NO\n");
            continue;
        }
        int k = sqrt(x);
        int p = x/2;
        int r= sqrt(p);
        if(k%2==0 && k*k==x){
            printf("YES\n");
            continue;
        }
        if(r*r==p){
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    
}