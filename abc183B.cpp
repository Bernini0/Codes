#include <bits/stdc++.h>
using namespace std;
int main()
{
    double sx,sy,gx,gy;
    int n;
    int arr[n];

    scanf("%lf %lf %lf %lf", &sx, &sy, &gx, &gy);
    double x = sy*gx + sx*gy;
    x /= (sy+gy);
    printf("%.10lf\n",x);
    // next_permutation(arr,arr+n);

}