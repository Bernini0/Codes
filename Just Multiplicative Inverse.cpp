#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int p;
        scanf("%d", &p);
        int arr[p];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        long long int sum = 3;
        if(p==2){
            long double ans = 1.0;
            printf("%.10Lf\n",ans);
            continue;
        }
        if(p==3){
            long double ans = 1.5;
            printf("%.10Lf\n",ans);
            continue;
        }
        for (int i = 3; i <= (p-1)/2; i++)
        {
            int k = p%i;
            arr[i] = 1+arr[k];
            sum += arr[i];
            
        }
        sum *= 2;
        sum += (p-1)/2;
        long double ans = sum*1.0;
        ans /= (p-1);
        printf("%.10Lf\n",ans); 
    }
}