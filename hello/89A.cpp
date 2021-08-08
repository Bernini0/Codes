#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        int c = max(a,b);
        if(a==0 || b==0){
            printf("0\n");
        }
        else if(min(a,b)-floor(c/2)>1 && ceil(c/2)>floor(c/2)){
            int d = floor(c/2);
            printf("%d\n",d+1);
            
        }
        else if(int(c/2)<min(a,b)){
            printf("%d\n",b);
        }
        else
        {
            printf("%d\n",int(c/2));
        }
        
    }
    
}