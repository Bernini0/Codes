#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int h = 0, e = 0,l = 0,o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='h'){
            h++;
        }
        else if(h>=1 && s[i]=='e'){
            e++;
        }
        else if(h>=1 && e>=1 &&s[i]=='l'){
            l++;
        }
        else if(h >= 1 && e>= 1 && l>=2 && s[i]=='o'){
            o++;
        }
    }
    if(h >=1 && e >=1 && l >=2 && o >= 1){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}