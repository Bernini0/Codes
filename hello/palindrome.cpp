#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1007];
    scanf("%s",str);
    int n =strlen(str);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if(str[i]!=str[n-i-1]){
            count++;
        
        }
    }
    
}