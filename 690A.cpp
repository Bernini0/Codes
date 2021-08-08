#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if(j==0){
                printf("a");
                j++;
            }
            else if(j==1){
                printf("b");
                j++;
            }
            else if(j==2){
                printf("c");
                j = 0;
            }
        }
        printf("\n");
        
    }
    
}