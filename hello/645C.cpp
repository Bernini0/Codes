#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(x1==x2 || y1==y2){
            printf("1\n");
            continue;
        }
        else
        {
            int c = (x2-x1)*(y2-y1-1);
            c = c+2;
            if((y2-y1-1) > 1 && x2-x1 >1){
                c = c-1;
            }
            printf("%d\n",c);
        }
        
    }
    
}