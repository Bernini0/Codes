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
        int cnt[26][m];
        memset(cnt,0,sizeof(cnt));
        for (int i = 0; i < 2*n-1; i++)
        {
            char s[m+1];
            scanf("%s",s);
            for (int j = 0; j < m; j++)
            {
                cnt[s[j]-97][j]++;
            }
            
        }
        for (int i = 0; i < m; i++)
        {
            for(int j = 0; j < 26; j++){
                if(cnt[j][i]%2==1){
                    printf("%c",'a'+j);
                    fflush(stdout);
                }
            }
        }
        printf("\n");
        fflush(stdout);
    }
    
}