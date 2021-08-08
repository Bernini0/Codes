#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[4];
    memset(arr,0,sizeof(arr));
    for (int i = 0; i < 4; i++)
    {
        arr[i] = n%10;
        n = n/10;
    }
    if(arr[0]==2 || arr[0]==5 || arr[0]==7 || arr[0]==9 || arr[0]==4)printf("hon\n");
    else if(arr[0]==0 || arr[0]== 1 || arr[0]==6 || arr[0]==8)printf("pon\n");
    else if(arr[0]==3)
    {
        printf("bon\n");
    }
    return 0;
    

}