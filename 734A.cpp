#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a = n%3;
        int b = n/3;
        if(a==1){
            printf("%d %d\n",b+1,b);
        }
        else if(a==2){
            printf("%d %d\n",b,b+1);
        }
        else printf("%d %d\n",b,b);
    }
    
}