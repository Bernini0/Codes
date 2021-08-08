#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        string s1 ="donate", s2 = "report";
        int donation = 0;
        int n;
        scanf("%d", &n);
        printf("Case %d:\n",tc);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if(s==s1){
                int p;
                scanf("%d", &p);
                donation+= p;
            }
            else
            {
                printf("%d\n",donation);
            }
            
        }
        
    }
}