#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1000000; i < 1000000+n  ; i++)
    {
        if(i==(1000000+n-1)){
            printf("%d\n",i);
        }
        else
        {
            printf("%d ",i);
        }
        
    }
    
}