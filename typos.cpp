#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt1 = 0,cnt2 = 0,cnt = 0;
    string s1 = s;
    for (int i = 1; i < s.size();)
    {
        if(s[i-1]==s[i]){
            cnt1++;
            if(cnt1 >= 2){
                cnt++;
                s.erase(s.begin()+i);
            }
            else
            {
                i++;
            }
        }
        else
        {
            cnt1 = 0;
            i++;
        }
    }
    // cout << s << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if(i+3 < s.size() && s[i]==s[i+1] && s[i+2]==s[i+3]){
            cnt++;
            // cout << s <<endl;
            s.erase(s.begin()+i+3);
        }
    }
    
    cout << s <<endl;
}