#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int ans = 1;
        scanf("%d", &n);
        if(n%2==0)ans = n/2;
        else ans = (n-1)/2;
        printf("%d\n",ans);
    }
    
}