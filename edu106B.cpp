#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        cin >> s;
        bool one = false;
        bool ok = true;
        bool doubl_one = false;
        if(s[0]=='1')one = true;
        for (int i = 1; i <s.size(); i++)
        {
            // if(s[i]=='1')one = true;
            if(s[i-1]==s[i] && s[i]=='0'){
                if(doubl_one){
                    ok = false;
                    break;
                }
            }
            else if(s[i-1]==s[i] && s[i]=='1')doubl_one = true;
            // else if(s[i]==)
        }
        if(ok){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    
}