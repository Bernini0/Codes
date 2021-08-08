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
        if(s.size() < 4){
            printf("NO\n");
            continue;
        }
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0'){
            printf("YES\n");
            continue;
        }
        else if(s[s.size()-1]=='0' && s[s.size()-2]=='2' && s[s.size()-3]=='0' &&s[s.size()-4]=='2'){
            printf("YES\n");

        }
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[s.size()-1]=='0'){
            printf("YES\n");
        }
        else if(s[0]=='2' && s[s.size()-1]=='0' && s[s.size()-2]=='2' && s[s.size()-3]=='0'){
            printf("YES\n");
        }
        else if(s[0]=='2' && s[1]=='0' && s[s.size()-1]=='0' &&s[s.size()-2]=='2'){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    
}