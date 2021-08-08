#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k[3];
        for (int i = 0; i < 1; i++)
        {
            scanf("%d %d %d", &k[0], &k[1], &k[2]);
        }
        sort(k,k+3);
        int sum = (k[2]-1)%7;
        k[1]-=(k[2]-1)/7;
        k[0]-=(k[2]-1)/7;
        if(k[1] < 1){
            printf("NO\n");
        }
        else
        {
            sum += (k[1]-1)%7;
            k[0] -= (k[1]-1)/7;
        }
        if(k[0] < 1 || k[0] > 7){
            printf("NO\n");
        }
        else
        {
            sum += (k[0]-1)%7;
            if(sum%7==6){
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

    }
    
}