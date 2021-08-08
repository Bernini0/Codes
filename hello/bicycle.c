#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    int m;
    
    scanf("%d", &m);
    double b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%lf", &b[i]);
    }
    int max = 0;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double l = b[i]/a[j];
            if (l == max && l-((int)l)==0)
            {
                cnt++;
            }
            else if (l > max && l-((int)l)==0)
            {
                max = l;
                cnt = 1;
                //printf("%d\n",max);
            }
            else
            {
                continue;
            }
            
            
            
        }
        
    }
    printf("%d",cnt);
    
    
}