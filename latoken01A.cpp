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
        char arr1[n][m], arr2[n][m],arr[n][m];
        getchar();
        for (int i = 0; i < n; i++)
        {
            for(int j  = 0; j < m; j++){
                scanf("%c", &arr[i][j]);
            }
            getchar();
        }
        
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j % 2 == 0)
                    {
                        arr1[i][j] = 'R';
                        arr2[i][j] = 'W';
                    }
                    else
                    {
                        arr1[i][j] = 'W';
                        arr2[i][j] = 'R';
                    }
                }
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    if (j % 2 == 0)
                    {
                        arr1[i][j] = 'W';
                        arr2[i][j] = 'R';
                    }
                    else
                    {
                        arr1[i][j] = 'R';
                        arr2[i][j] = 'W';
                    }
                }
            }
        }
        bool one = true;
        bool two = true;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                if(arr[i][j]=='.')continue;
                else if(arr[i][j]!=arr1[i][j]){
                    one = false;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                if(arr[i][j]=='.')continue;
                else if(arr[i][j]!=arr2[i][j]){
                    two = false;
                }
            }
        }
        if(!one && !two){
            printf("NO\n");
        }
        else if(one){
            printf("YES\n");
            for (int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++){
                    printf("%c", arr1[i][j]);
                }
                printf("\n");
            }
            
        }
        else if(two){
            printf("YES\n");
            for (int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++){
                    printf("%c", arr2[i][j]);
                }
                printf("\n");
            }
        }
    }
}