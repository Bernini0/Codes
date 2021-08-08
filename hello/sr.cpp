#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    scanf("%d",&k);
    getchar();
    char str[1007];
    scanf("%s",str);
    int length =strlen(str);
    if(length<=k){
        printf("%s\n",str);
    }
    else{
        for (int i = 0; i < k; i++)
        {
            printf("%c",str[i]);
        }
        printf("...\n");
    }
    return 0;
}