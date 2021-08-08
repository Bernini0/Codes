#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b[5],r[5];
    int bsum = 0, rsum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
        bsum+= b[i];
    }
    for(int i = 0 ; i < 5; i++){
        scanf("%d", &r[i]);
        rsum+= r[i];
    }
    if(bsum >= rsum){
        printf("Blue\n");
    }
    else
    {
        printf("Red");
    }
    
}