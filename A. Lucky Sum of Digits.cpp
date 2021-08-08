#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    if(n==1 || n == 2 || n==3 || n==5 || n==6 || n==9 || n==10 || n==13 || n==17){
        printf("-1\n");
        return 0;
    }
    if(n%7==1){
        printf("44");
        for (int i = 1; i <= (n/7)-1; i++)
        {
            printf("7");
        }
        printf("\n");
    }
    else if(n%7==2){
        printf("4444");
        for (int i = 0; i < (n/7)-2; i++)
        {
            printf("7");
        }
        printf("\n");
    }
    else if(n%7==3)
    {
        printf("444444");
        for (int i = 0; i < (n/7)-3; i++)
        {
            printf("7");
        }
        printf("\n");
    }
    else if(n%7==4)
    {
        printf("4");
        for (int i = 0; i < n/7; i++)
        {
            printf("7");
        }
        printf("\n");
    }
    else if(n%7==5)
    {
        printf("444");
        for (int i = 0; i < (n/7)-1; i++)
        {
            printf("7");
        }
        printf("\n");
    }
    else if(n%7==6)
    {
        printf("44444");
        for (int i = 0; i < (n/7)-2; i++)
        {
            printf("7");
        }
        printf("\n");
    }
    else
    {
        for (int i = 0; i < n/7; i++)
        {
            printf("7");
        }
        printf("\n");
    }
}