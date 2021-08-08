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
        bool no = false;
        for (int i = 0; i*2020 <= n; i++)
        {
            if((n-(i*2020))%2021==0){
                printf("YES\n");
                no = true;
                break;
            }
        }
        if(!no){
            printf("NO\n");
        }
    }
    
}