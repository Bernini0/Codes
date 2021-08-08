#include <bits/stdc++.h>
using namespace std;
unsigned long long int arr[5000001];
void eular_phi_seive()
{
    for (int i = 0; i < 5000001; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i < 5000001; i++)
    {
        if(arr[i]==i){
            for (int j = i; j < 5000001; j+= i)
           {
                arr[j] /= i;
                arr[j] *= (i-1);
            }
            
        }
    }
    for (int i = 2; i < 5000001; i++)
    {
        arr[i] = (arr[i]*arr[i]) + arr[i-1];
    }
    
    
}
int main()
{
    eular_phi_seive();
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b)swap(a,b);
    unsigned long long int ans = arr[b]-arr[a-1];
    printf("Case %d: %llu\n",tc,ans); 

    }

}