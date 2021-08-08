#include <bits/stdc++.h>
using namespace std;
vector <int>prime;
void bitwiseseive(int n){
    int arr[(n/64)+1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < n; i+=2)
    {
        if(!(arr[i/64] & (1 << ((i >> 1)& 31)))){
            for (int j = i*i; j < n; j+= 2*i)
            {
                arr[j/64] |= (1 << ((j >> 1) & 31));
            }
            
        }
    }
    
    prime.push_back(2);
    for (int i = 3; i < n; i+=2)
    {
        if(!(arr[i/64] & (1<< ((i >> 1)&31)))){
            prime.push_back(i);
        }
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    prime.clear();
    bitwiseseive(n);
    printf("%ld\n",prime.size());
}