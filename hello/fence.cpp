#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        if(t <=h){
            count++;
        }
        else
        {
            count +=2;
        }
        
    }
    printf("%d\n",count);
    
}