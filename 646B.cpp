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
        bool one = false,zero = false;
        int cnt1 = 0,cnt0 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1' &&!one){
                one = true;
            }
            else if(s[i]=='0' && !zero){
                zero = true;
            }
            if(s[i]=='1' && zero){
                cnt1++;
            }
            else if(s[i]=='0' && one){
                cnt0++;
            }
        }
        int ans = min(cnt1, cnt0);
        printf("%d\n",ans);
         
    }
    
}