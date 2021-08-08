#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, x;
    scanf("%lld %lld", &n, &x);
    string s;
    cin >> s;
    for (long long int i = 0; i < n; i++)
    {
        if(s[i]=='o'){
            x++;
        }
        else{
            if(x>0){
                x--;
            }
        }
    }
    printf("%lld\n",x);
}