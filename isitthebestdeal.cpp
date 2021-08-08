#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+3);
    int sum = 0;
    int sum1 = 0;
    for (int i = 2; i >= 0; i--)
    {
        sum1 += arr[i];
        if(arr[i] >= 500){
            sum += arr[i]-100;
            sum1 -= arr[i];
        }
        else if(sum1 >= 500){
            sum+= sum1-100;
            sum1 = 0;
        }
    }
    sum += sum1;
    printf("%d\n",sum);
}