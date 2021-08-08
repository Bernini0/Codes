#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100007];
    scanf("%s", str);
    int j = -1;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {

        if (str[i] == '0' && j == -1)
        {
            j = i;
        }
        else if ((i == len - 1) && j == -1)
        {
            break;
        }
        else
        {
            printf("%c",str[i]);
        }
        
    }
    
    printf("\n");
}