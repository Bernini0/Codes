#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    getchar();
    char str[100000];
    scanf("%s", str);
    int arr[strlen(str)];
    memset(arr,0,sizeof(arr));
    for (int i = 0; i < strlen(str); i++)
    {
        arr[i] = str[i]-48;
    }
    int ans = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(arr[i]==1){
            ans += a;
        }
        else if(arr[i]==2){
            ans +=b;
        }
        else if(arr[i]==3){
            ans +=c;
        }
        else
        {
            ans +=d;
        }
        
    }
    printf("%d\n",ans);

    return 0;
    
}