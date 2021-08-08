#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int>l,r;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='l'){
            l.push_back(i+1);
        }
        else
        {
            r.push_back(i+1);
        }
    }
    reverse(l.begin(),l.end());
    for (int i = 0; i < r.size(); i++)
    {
        printf("%d\n",r[i]);
    }
    for (int i = 0; i < l.size(); i++)
    {
        printf("%d\n",l[i]);
    }
    
    
}