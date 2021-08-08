#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int s;
        scanf("%d", &s);
        double x = sqrt((double)s);
        if(x-(int)x >= 1e-8){
            x++;
        }
        printf("%d\n",(int)x);
    }
}