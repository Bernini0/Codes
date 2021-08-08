#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ac[n];
    int wa[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ac[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &wa[i]);
    }
    sort(ac, ac + n);
    sort(wa, wa + m);
    int ans = 0;
    for (int i = ac[n - 1]; ; i++)
    {
        if (wa[0]>i)
        {
            if ((2 * ac[0]) > i)
            {
                continue;
            }
            else
            {
                ans = i;
                break;
            }
        }
        else
        {
            break;
        }
        
       
    }
    if(ans == 0){
        printf("-1\n");
    }
    else
    {
        printf("%d\n",ans);
        return 0;
    }
    return 0;
    
}