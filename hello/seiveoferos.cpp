#include <bits/stdc++.h>
using namespace std;

void seive(int n,int arr[]){

    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i <=n ; i++)
    {
        if(arr[i] == i){
            for (int j = i*i; j <=n; j=j+i)
            {
                arr[j] = 0;
            }
            
            
        }
    }
    
    
}

int main()
{

    
    int n;
    scanf("%d",&n);
    int arr[n+1];
    seive(n,arr);

    arr[1] = 0;
    for(int i =0; i<=n; i++){
        if(arr[i]!=0){
        printf("%d",arr[i]);
        }
    }
    
    

}