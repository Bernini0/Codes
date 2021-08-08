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
        string s;
        cin >> s;
        int m = 0, t = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='T')t++;
            else m++;
        }
        if(t != 2*m){
            printf("NO\n");
            continue;
        }
        bool no = false;
        int t1 = 0,m1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='T'){
                t1++;
                if(t-t1 < m-m1){
                    no = true;
                }
            }
            else{
                m1++;
                if(m1 > t1){
                    no = true;
                }
            }
        }
        if(no){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
        
    }
    
}