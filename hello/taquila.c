#include <stdio.h>
int minimum(int a, int b,int c){
    int min = a;
    if (min > b)
    {
        min =b;
    }
    if (min > c)
    {
        min = c;
    }
    return min;
    
    
}
int main()
{
    int n, k, l, c, d, p, nl, np,cd;
    scanf("%d %d %d %d %d %d %d %d",&n, &k, &l, &c, &d, &p, &nl, &np);
    cd = c*d;
    int nlz=k*l/nl;
    int middle = minimum(cd,p/np,nlz);
    
    int ans = middle/n;

    printf("%d\n",ans);

    return 0;

}