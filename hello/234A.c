#include <stdio.h>
#include <math.h>
int main()

{
    double n, m;
    scanf("%lf %lf", &n, &m);
    // printf("%lf", n);

    double a;
    if (n > m)
    {
        a = sqrt(n);
    }
    else
    {
        a = sqrt(m);
    }
    // printf("%lf",a);
    int cnt = 0;
    for (int i = 0; i <= (int)a; i++)
    {
        for (int j = 0; j <= (int)a; j++)
        {
            if (((i*i)+j == n) && ((j*j)+i == m))
            {
                cnt++;
            }
            
        }
        
    }
    
    printf("%d",cnt);
    return 0;
    
    
    
}