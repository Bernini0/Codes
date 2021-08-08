#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        if(n==1){
            if(k==m/2)printf("YES\n");
            else printf("4NO\n");
            //continue;
        }
        else if(m==1){
            if(k==0)printf("YES\n");
            else printf("2NO\n");
            //continue;
        }
        else if(n%2==1){
            int r = m/2;
            if(k%r==0 && ((k/r)%2)==1)printf("1YES\n");
            else printf("1NO\n");
            //continue;
        }
        else if(m%2==1){
            int r = n/2;
            if(k%r==0 && (k/r)%2==0)printf("YES\n");
            else printf("3NO\n");
            //continue;
        }
    }
    
}