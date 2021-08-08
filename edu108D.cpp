#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);
    ll arr_a[n],arr_b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr_a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr_b[i]);
    }
    ll product[n];
    product[0] = arr_a[0]*arr_b[0];
    for (int i = 1; i < n; i++)
    {
        product[i] = arr_a[i]*arr_b[i];
        product[i] += product[i-1];
    }
    ll product2[n];
    product2[0] = arr_a[n-1]*arr_b[0];
    for (int i = 1; i < n; i++)
    {
        product2[i] = arr_a[n-1-i]*arr_b[i];
        product2[i]+= product2[i-1];
    }
    
    ll maxi = -1000000000000000;
    // printf("skjdafhkasfn");
    for (int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++){
            ll s = 0;
            if(i-1 >= 0){
                s+= product[i-1];
                s-=product2[i-1];
            }
            s+=product2[j];
            s+= product[n-1]-product[j];
            printf("%d %d--> %lld %lld %lld %lld %lld %lld\n",i,j,product2[i-1],product2[j],product[i-1],product[j],product[n-1],s);
            if(s > maxi){
                maxi = s;
            }
        }
    }
    printf("%lld\n",maxi);
}