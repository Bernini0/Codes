#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mon,tues,wed,thrus,fri,sat,sun;
    int ans;
    scanf("%d %d %d %d %d %d %d", &mon, &tues, &wed, &thrus, &fri, &sat, &sun);
    for (int i = 1;; i++)
    {
        if (n <=0 && i!=1)
        {
            ans = i-1;
            break;
        }
        if (n <=0 && i==1)
        {
            ans=7;
            break;
        }
        
        
        if (i==1)
        {
            n-=mon;
        }
        if (i==2)
        {
            n -= tues;
        }
        if (i==3)
        {
            n -=wed;
        }
        if(i==4)
        {
            n -=thrus;
        }
        if(i ==  5)
        {
            n -= fri;
        }
        if (i == 6)
        {
            n -=sat;
        }
        if (i == 7)
        {
            n -=sun;
        }
        if (i==7)
        {
            i=1;
        }    
        
    }
    
    printf("%d",ans);

    return 0;
}