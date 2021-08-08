#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[51];
    char str2[51];
    scanf("%s", str);
    scanf("%s", str2);
    int cnt = 1;
    int j =0;
    for (int i = 0; i < strlen(str2); i++)
    {
        if(str2[i]==str[j]){
            cnt++;
            j++;
        }
    }
    

    if (cnt <= strlen(str))
    {
        printf("%d\n", cnt);
    }
    else
    {
        printf("%d\n", strlen(str));
    }
}