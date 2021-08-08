/*
Number of pieces such that after each cut every piece is either a,b, or c

#include <bits/stdc++.h>
using namespace std;
int arr[3];
int ans(int n)
{
    int ret = 0;
    if(n-arr[0]== arr[2] || n-arr[0]==arr[1] || n-arr[2]==arr[0] || n-arr[0]==0){
        ret = max(ret,ans(n-arr[0])+1);
    }
    if(n-arr[1]==arr[2] || n-arr[1]==arr[1] || n-arr[1]==arr[0] || n-arr[1]==0){
        ret = max(ret,ans(n-arr[1])+1);
    }
    if(n-arr[2]==arr[2] || n-arr[2] ==arr[1] || n-arr[2] ==arr[0] || n-arr[2]==0){
        ret = max(ret,ans(n-arr[2])+1);
    }
    return ret;
}
int main()
{
    int n;
    scanf("%d %d %d %d", &n, &arr[0], &arr[1], &arr[2]);
    sort(arr,arr+3);
    int a = ans(n);
    printf("%d\n",a);
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int d = n/a;
    int e = n/b;
    int max = 0;
    for (int i = 0; i <= d; i++)
    {
        for(int j = 0; j <= e; j++)
        {
            int ans = i*a+j*b;
            int k = n - ans;
            if(k >= 0 && k%c==0){
                int f = i+j+(k/c);
                if(max < f){
                    max = f;
                }
            }
        }
    }
    printf("%d\n",max);
    
}