#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if((a+1)*2  < b){
        printf("-1\n");
        return 0;
    }
    if(b < a-1){
        printf("-1\n");
        return 0;
    }
    if(b<= a){
        for (int i = 0; i < b; i++)
        {
            printf("01");
            a--;
        }
        if(a > 0){
            printf("0\n");
        }
        printf("\n");
        return 0;
    }
    while (b > a)
    {
        printf("110");
        b-=2;
        a--;
        if(a==0){
            break;
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("1");
        if(a >0){
            printf("0");
            a--;
        }
    }
    printf("\n");
    
}