#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,u1,u2;
        scanf("%d %d %d", &n, &u1, &u2);
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &v[i]);
        }
        // int u1, u2;
        // scanf("%d %d", &u1, &u2);
        bool zero = false,one = false;
        for (int i = 1; i < n; i++)
        {
            if(abs(v[i]-v[i-1])>1){
                zero = true;
                break;
            }
            else if(abs(v[i]-v[i-1])==1){
                one = true;
            }
        }
        if(zero){
            printf("0\n");
        }
        else if(one){
            printf("%d\n",min(u1,u2));
        }
        else{
            printf("%d\n",min(u1+u2,2*u2));
        }
    }
    
}