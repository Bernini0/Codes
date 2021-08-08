#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int r1,w1,r2,w2,c1,c2;
        scanf("%d %d %d %d %d %d", &r1, &w1, &c1, &r2, &w2, &c2);
        int one = 0, two = 0;
        if(r1 < r2)two++;
        else one++;
        if(w1 < w2)two++;
        else one++;
        if(c1 < c2)two++;
        else one++;
        if(one > two){
            printf("A\n");
        }
        else printf("B\n");
    }
}