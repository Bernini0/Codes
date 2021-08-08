#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],sum = 0;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    sort(arr,arr+3);
    int a = 0;
    for (int i = 0; i < 3; i++)
    {
        if(arr[i] >=500){
            sum += arr[i]-100;
        }
        else{
            a += arr[i];
            if(a >= 500){
                sum += a - 100;
                a = 0;
            }
        }
    }
    if(a!= 0 && a< 500){
        sum += a;
    }
    printf("%d\n",sum);
}
