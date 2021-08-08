#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    int b[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &b[i]);
    }
    sort(b,b+6);
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        int j = 0;
        while (b[j] < a[i])
        {
            cnt++;
            j++;
        }
        // printf("%d %d\n",cnt,a[i]);
        
    }
    if(cnt == 0){
        printf("0\n");
    }
    else{
        int k = __gcd(cnt,36);
        printf("%d/%d\n",(cnt/k),36/k);
    }
}