#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    char arr[n][m];
    getchar();
    int dots = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%c", &arr[i][j]);
            if(arr[i][j]=='.')dots++;
        }
        getchar();
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;){
            if(arr[i][j]=='*'){
                j++;
            }
            else{
                int cnt = 1;
                j++;
                while (j < m && arr[i][j]==arr[i][j-1])
                {
                    cnt++;
                    j++;
                }
                if(cnt >= k){
                    ans+= cnt+1-k;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n;){
            if(arr[j][i]=='*'){
                j++;
            }
            else{
                int cnt = 1;
                j++;
                while (j < n && arr[j][i]==arr[j-1][i])
                {
                    cnt++;
                    j++;
                }
                if(cnt >= k){
                    ans+= cnt+1-k;
                }
            }
        }
    }
    if(k==1){
        printf("%d\n",dots);
    }
    else{
        printf("%d\n",ans);
    }
}