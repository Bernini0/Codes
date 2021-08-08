#include <stdio.h>
#include <math.h>
int main()
{
    double n, m;
    scanf("%lf %lf", &n, &m);
    double a;
    if (m > n)
    {
        a = sqrt(m);
    }
    else
    {
        a = sqrt(n);
    }
    int cnt=0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; i++)
        {
            if ((i*i)+ j == n && (j*j)+i == m)
            {
             cnt++;
            }
            
        }
        
    }
    
    printf("%d",cnt);

    return 0;
    
}