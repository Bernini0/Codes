#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s, tt;
        cin >> s >> tt;
        int j = s.size()-1;
        bool no = false;
        for (int i = tt.size()-1; i >= 0; i--)
        {
            while (s[j]!= tt[i])
            {
                j-=2;
                if(j < 0)break;
            }
            if(j < 0){
                no = true;
                break;
            }
            j--;
        }
        if(!no)printf("YES\n");
        else printf("NO\n");
    }
    
}