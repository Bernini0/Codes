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
        getchar();
        int cnt = 0;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &arr[i]);
            if(arr[i]=='D'){
                cnt++;
            }
        }
        int k = 0;
        if(cnt%2==0)printf("N\n");
        else
        {
            printf("Y\n");
            for (int i = 0; i < n; i++)
            {
                if(arr[i]=='D'){
                    printf("%d ",i+1);
                    if(i+1 != n){
                        if(arr[i+1]=='B'){
                            arr[i+1]='D';
                        }
                        else
                        {
                            arr[i+1] = 'B';
                        }
                    }
                    for (int j = i; j > k; j--)
                    {
                        printf("%d ",j);
                    }
                    k = i+1;
                }
            }
            printf("\n");
        }
    }
    
}