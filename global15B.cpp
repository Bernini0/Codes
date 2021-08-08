#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n][5];
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
        }
        int i = 0;
        bool vis[n];
        memset(vis, false, sizeof(vis));
        for (int j = 1; j < n; j++)
        {
            int one = 0;
            int two = 0;
            if (arr[i][0] < arr[j][0])
                one++;
            else
                two++;
            if (arr[i][1] < arr[j][1])
                one++;
            else
                two++;
            if (arr[i][2] < arr[j][2])
                one++;
            else
                two++;
            if (arr[i][3] < arr[j][3])
                one++;
            else
                two++;
            if (arr[i][4] < arr[j][4])
                one++;
            else
                two++;
            if (one > two)
            {
                vis[j] = true;
                continue;
            }
            else
            {
                vis[i] = true;
                i = j;
            }
        }
        bool no = false;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                int one = 0, two = 0;
                if (arr[i][0] < arr[j][0])
                    one++;
                else
                    two++;
                if (arr[i][1] < arr[j][1])
                    one++;
                else
                    two++;
                if (arr[i][2] < arr[j][2])
                    one++;
                else
                    two++;
                if (arr[i][3] < arr[j][3])
                    one++;
                else
                    two++;
                if (arr[i][4] < arr[j][4])
                    one++;
                else
                    two++;
                if(one < two){
                    no = true;
                    break;
                }
            }
        }
        if(!no){
            printf("%d\n",i+1);
        }
        else printf("-1\n");
    }
}