#include <bits/stdc++.h>
using namespace std;
int f(int a, int n, vector<int>& me){
    int c = n/4;
    if(c> 0){
        a-= me[c-1];
    }
    return a;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<int>me(n);
        vector<int>ilya(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &me[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ilya[i]);
        }
        sort(me.begin(),me.end());
        sort(ilya.begin(),ilya.end());
        for (int i = 1; i < n; i++)
        {
            me[i]+=me[i-1];
            ilya[i]+=ilya[i-1];
        }
        int d = ilya[n-1];
        int cnt = 0;
        int e = n;
        int c = n/4;
        int a = me[n-1], b = ilya[n-1];
        if(c > 0){
            a-=me[c-1];
            b-=ilya[c-1];
        }
        // printf("%d %d\n",a,b);

        while (a < b)
        {
            n++;
            me.push_back(100);
            b = d;
            if(n-(n/4)< e){
                b-=ilya[e-n+((n/4))-1];
            }
            me[n-1]+= me[n-2];
            a = f(me[n-1],n,me);
            // printf("%d\n",a);
            cnt++;
        }
        printf("%d\n",cnt);
        
    }
    
}