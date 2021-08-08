#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
void eular_phi()
{
    
    for(int i = 0; i < 1000001; i++)arr[i] = i;
    for(int i = 2; i < 1000001; i++){
        if(arr[i]==i){
            for (int j = i; j < 1000001; j+= i)
            {
                arr[j] /= i;
                arr[j] *= (i-1);
            }
            
        }
    }
}
int main()
{
    eular_phi();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long int ans;
        ans = (n*(n-1-arr[n]))/2;
        printf("%lld\n",ans);
    }
    
}