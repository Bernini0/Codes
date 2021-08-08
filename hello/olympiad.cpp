#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    scanf("%d", &n);
    int arr[n];
    int arr1[n],arr2[n],arr3[n];
    int count[4];
    memset(arr1, 0, sizeof(arr1));
    memset(arr2,0,sizeof(arr2));
    memset(arr3,0,sizeof(arr3));
    memset(count,0,sizeof(count));

    int w = 0, x = 0,y = 0; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==1){
            arr1[w] = i;
            w++;
        }
        else if(arr[i]==2){
            arr2[x] = i;
            x++;
        }
        else
        {
            arr3[y] = i;
            y++;
        }
        
        count[arr[i]]++;
    }

    sort(count,count+4);
    printf("%d\n",count[1]);
    for (int i = 0; i < count[1]; i++)
    {
        printf("%d %d %d\n",arr1[i]+1,arr2[i]+1,arr3[i]+1);
    }
    
    
    
}