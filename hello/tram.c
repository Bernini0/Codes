#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tram[n][2];
    int ans=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&tram[i][1],&tram[i][2]);
    }
    for (int i = 0; i < n-1; i++)
    {
        ans = ans+tram[i][2]-tram[i][1];
        if (ans > cnt)
        {
            cnt=ans;
        }
        
    }
    printf("%d", cnt);
}