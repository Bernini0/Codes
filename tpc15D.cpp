#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int cnt[100000+30];
    int a;
    memset(cnt,0,sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        cnt[a]++;
    }
    int count = 0;
    for (int i = 0; i < 100030-1; i++)
    {
        cnt[i+1] += cnt[i]/2;
        cnt[i] = (cnt[i]%2);
    }
    // int 
    for (int i = 0; i < 100030; i++)
    {
        if(cnt[i]>0){
            if(count==0){
                a = i;
            }
            count++;
        }
    }
    if(count==1 && n > 1){
        printf("Y\n");
    }
    else if(count==2){
        printf("Y\n");
    }
    else printf("N\n");
}