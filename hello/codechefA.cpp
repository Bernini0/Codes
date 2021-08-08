#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, l, r;
        scanf("%d %d %d %d", &a, &b, &l, &r);
        int c =(l+b)/(a+b);
        int d = (l)/(a+b);
        double e = ceil((r+b)/(a+b));
        double f = ceil((r)/(a+b));
        int cntl;
        if(c < d){
            if(d*(a+b)==l){
                cntl =d-1;
            }
            else
            {
                cntl = d;
            }
            

        }
        else
        {
            if(c*(a+b)-b==l){
                cntl =c-1;
            }
            else
            {
                cntl = c;
            }
            
        }
        if( (int)e < (int)f)swap(e,f);
        int ans = e -cntl;
        printf("%d\n",ans);
    }
    
}