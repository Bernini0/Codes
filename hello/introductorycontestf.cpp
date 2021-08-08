#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int n;
        int one=0;
        scanf("%d", &n);
        while(n>0){
            if(n%2==1){
                one++;
            }
            n=n/2;
            
        }
        if(one%2==1){
            printf("Case %d: odd\n",tc);
        }
        else
        {
            printf("Case %d: even\n",tc);
        }
        
        
    }


    return 0;
}