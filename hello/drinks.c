#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    double orange = 0;
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        orange +=arr[i];
    }
    double ans =orange/n;
    printf("%.12lf", ans);

    return 0;
    
}