#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sx, sy, ex, ey;
    scanf("%d %d %d %d %d", &t, &sx, &sy, &ex, &ey);
    int sum_x = ex - sx;
    int sum_y = ey - sy;
    int arr[2]={0};
    char c;
    int n=0,s =0,e =0,w =0;
    getchar();
    for (int i = 1; i <= t; i++)
    {
        
        scanf("%c",&c);
        if(c == 'E' && e < sum_x){
            e++;
            arr[0] = i;
            // printf("%d 0\n",arr[0]);
        }
        else if(c == 'W' && w > sum_x){
            w--;
            arr[0] =i;
            // printf("%d 0\n",arr[0]);
        }
        else if(c == 'N' && n < sum_y){
            n++;
            arr[1] = i;
            // printf("%d 1\n",arr[1]);
        }
        else if(c == 'S' && s > sum_y){
            s--;
            arr[1] = i;
            // printf("%d 1\n",arr[1]);
        }
    }
    sort(arr,arr+2);
    if((sum_y ==n || sum_y ==s) && (sum_x==e || sum_x == w)){
        printf("%d\n",arr[1]);    
    }

    else
    {
        printf("-1\n");
    }
    return 0;
    
}