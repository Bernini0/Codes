#include <stdio.h>
int main()
{
    int arr[9];
    int cnt[10];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d",&arr[i]);
    }
    cnt[1]= (arr[0]+arr[1]+arr[3]+1)%2;
    cnt[2]= (arr[0]+arr[1]+arr[2]+arr[4]+1)%2;
    cnt[3]= (arr[1]+arr[5]+arr[2]+1)%2;
    cnt[4]= (arr[0]+arr[3]+arr[4]+arr[6]+1)%2;
    cnt[5]= (arr[4]+arr[1]+arr[5]+arr[7]+arr[3]+1)%2;
    cnt[6]= (arr[5]+arr[2]+arr[8]+arr[4]+1)%2;
    cnt[7]= (arr[6]+arr[7]+arr[3]+1)%2;
    cnt[8]= (arr[7]+arr[4]+arr[6]+arr[8]+1)%2;
    cnt[9]= (arr[8]+arr[5]+arr[7]+1)%2;
    for (int i = 1; i < 10; i=i+3)
    {
        printf("%d%d%d\n",cnt[i],cnt[i+1],cnt[i+2]);
    }
    

    return 0;
    
}