#include<stdio.h>
#include<math.h>
int main()
{
    double h,A,B,ans,pi=acos(-1.0);
    scanf("%lf%lf%lf",&h,&A,&B);
    A*=pi; //converting degree to radian
    A/=180;
    B*=pi;
    B/=180;
    ans=0.5*h*h*(tan(A)+tan(B)); //area of each triangle is 0.5*h^2*tan(x)
    printf("%0.6lf\n",ans);
}
