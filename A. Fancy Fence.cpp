#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        a = 180-a;
        if(360%a==0){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}