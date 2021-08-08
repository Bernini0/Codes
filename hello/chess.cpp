#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    char str[n+100];
    scanf("%s",str);
    int anton =0;
    int derik = 0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='A'){
            anton++;
        }
        else
        {
            derik++;
        }
        
    }
    if(anton > derik){
        printf("Anton\n");
    }
    else if(anton < derik)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    

    return 0;
    
}