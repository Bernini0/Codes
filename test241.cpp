#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    n = 10;
    printf("%d\n",n);
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        int a = rand()%n+1;
        int b = rand()%n+1;
        if(a > b)swap(a,b);
        printf("%d %d\n", a,b);
    }
    
}