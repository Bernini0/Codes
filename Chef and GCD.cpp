#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if(__gcd(x,y)>1){
            printf("0\n");
        }
        else if(__gcd(x+1,y)>1 || __gcd(x,y+1)>1){
            printf("1\n");
        }
        else printf("2\n");
    }
    
}