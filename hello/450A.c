#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int t;
    scanf("%d %d",&n, &t);
    double arr[n];
    double value;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&value);
        if ((value/t) > 1 )
        {
            arr[i] = value/t;
        }
        else
        {
            arr[i] = 0;
        }
        
        
    }
    int firsti;
    int secondi=0;
    int my_var;
    int my_i;
    firsti = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (ceil(arr[i]) >= firsti)
        {
            firsti = ceil(arr[i]);
            secondi = firsti;
            my_var = i;
        }
        
    }
    if (firsti >= secondi)
    {
        printf("%d",my_var+1);
        return 0;
    }
    else if(firsti==arr[0])
    {
        printf("1");
    }
    
    
    return 0;
}