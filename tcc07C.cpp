#include <bits/stdc++.h>
using namespace std;
typedef struct co_ordinate
{
    int x, y, z;
}co_ordinate;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr2[8][7];
        co_ordinate arr[8];
        for (int i = 0; i < 8; i++)
        {
            scanf("%d %d %d", &arr[i].x, &arr[i].y, &arr[i].z);
        }
        for (int i = 0; i < 8; i++)
        {
            int k = 0;
            for(int j = 0; j < 8; j++){
                if(i==j)continue;
                arr2[i][k] = ((arr[i].x-arr[j].x)*(arr[i].x-arr[j].x))+((arr[i].y-arr[j].y)*(arr[i].y-arr[j].y))+((arr[i].z-arr[j].z)*(arr[i].z-arr[j].z));
                k++;
            }
            sort(arr2[i],arr2[i]+7);
        }
        bool yes = false;
        for (int i = 0; i < 8; i++)
        {
            if(arr2[i][0]==arr2[i][1] && arr2[i][1]==arr2[i][2] && arr2[i][3]==arr2[i][4] && arr2[i][4]==arr2[i][5] && arr2[i][2]!=arr2[i][3] && arr2[i][3]!=arr2[i][6])continue;
            else
            {
                yes = true;
                // printf("%d\n",i);
                break;
            }
            
        }
        if(yes){
            printf("NO\n");
            continue;
        }
        int k = arr2[0][0];
        int l = arr2[0][3];
        int p = arr2[0][6];
        for (int i = 0; i < 8; i++)
        {
            if(arr2[i][0]==k && arr2[i][3]==l && arr2[i][6]==p)continue;
            else
            {
                yes = true;
                break;
            }
            
        }
        if(yes){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    
}