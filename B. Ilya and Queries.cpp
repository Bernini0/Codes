#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int>v;
    v.push_back(0);
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]==s[i+1]){
            v.push_back(i+1);
        }
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        int idx1 = lower_bound(v.begin(),v.end(),a) - v.begin();
        int idx2 = lower_bound(v.begin(),v.end(),b) - v.begin();
        idx2--;
        printf("%d\n",idx2-idx1+1);
    }
    
}