#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a = max(3*(a/10),a-((a/250)*c));
    b = max(3*(b/10),b-((b/250)*d));
    if(a > b){
        printf("Misha\n");
    }
    else if(a==b){
        printf("Tie\n");
    }
    else
    {
        printf("Vasya\n");
    }
    
}