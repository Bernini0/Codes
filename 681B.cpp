#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int a, b;
        cin >> a >> b;
        string s;
        string s1;
        cin >> s;
        s1 = s;
        int cnt = 0;
        for (int i = 0; i < s1.size()-1; i++)
        {
            // if(s[i]=='0' && s[i+1]=='0'){
            //     s1[i]='L';
            // }
            if(s[i]=='1' &&s[i+1]=='1'){
                s1[i]='L';
            }
        }
        int zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='0'){
                zero++;
            }
        }
        
        string s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]=='L'){
                continue;
            }
            else
            {
                s2.push_back(s1[i]);
            }
            
        }
        int one = 0,zero1 = 0;
        int one1 = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            if(s2[i]=='1'){
                one++;
            }
        }
        int ans = 0;
        // cout << s2 << endl;
        // printf("%d\n",s2.size());
        for (int i = 0; i < s2.size();)
        {
            if(s2[i]=='1'){
                one1 = i;
                i++;
                bool over = false;
                if(i == s2.size()){
                    over= true;
                }
                while (s2[i]!='1' &&i <s2.size())
                {
                    i++;
                    if(i==s2.size()){
                        over = true;
                        break;
                    }
                }
                if(over){
                    ans += a;
                    break;
                }
                if(ans == 0){
                    if((i-one1-1)*b <=a){
                        ans += ((i-one1-1)*b);
                        // printf("1%d\n",ans);
                    }
                    else
                    {
                        ans += a;
                        // printf("2%d\n",ans);
                    }
                    
                }
                else if((i-one1-1)*b <=a){
                    ans += ((i-one1-1)*b);
                    // p/rintf("3%d\n",ans);
                }
                else
                {
                    ans += a;
                    // printf("%d\n",ans);
                }
                one1 = i;
            }
            else
            {
                i++;
            }
            
        }
        cout << ans <<endl;
    }
    
}