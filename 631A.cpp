#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("W");
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i==0 && j==0)continue;
                else
                {
                    printf("B");
                }
                
            }
            printf("\n");
        }
        
    }
    
}