#include <bits/stdc++.h>
using namespace std;
void f(int n){
    if(n%3==0)f(n-1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <i+1;j++){
            for(int k = 0; k < j+1; k++)
                printf("*");
                printf("\n");
            
        }
    }
}
int main()
{f(5);
}