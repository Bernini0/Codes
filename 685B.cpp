#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n==1){
            printf("0\n");
            continue;
        }
        if(n==2){
            printf("1\n");
            continue;
        }
        if(n==3){
            printf("2\n");
            continue;
        }
        if(n%2==1){
            printf("3\n");
        }
        else{
            printf("2\n");
        }

    }
    
}