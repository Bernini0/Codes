#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        
        char arr[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%c", &arr[i][j]);
                if(arr[i][j]=='1'){
                    arr[i][j]='2';
                }
            }
            getchar();
            
        }
        for (int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++){
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
        
    }
    
}