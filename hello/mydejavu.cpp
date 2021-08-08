#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int a, b;
    while (scanf("%d %d", &a, &b)==2)
    {
        int c = __gcd(a,b);
        if(c==1){
            printf("%10d%10d    Good Choice\n\n",a,b);
        }
        else
        {
            printf("%10d%10d    Bad Choice\n\n",a,b);
        }
        
    }
    
}