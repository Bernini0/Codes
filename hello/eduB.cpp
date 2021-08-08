#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int d, e;
        if(a >= c){
            d = -1;
        }
        else if(c>a){
            d = 1;
        }
        
        if(c*1.0/b >= (double)a){
            e = -1;
        }
        else {
            e = b;
        }
        printf("%d %d\n",d,e);
    }
    
}