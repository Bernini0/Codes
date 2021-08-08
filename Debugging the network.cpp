#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        int cha = 0;
        string ans;
        bool no = false;
        for (int i = 0; i < s.size(); )
        {
            if(no){
                break;
            }
            if(s[i] < 58){
                long long int l = 0;
                while (s[i] < 58 && i < s.size())
                {
                    l *= 10;
                    l += s[i]-48;
                    i++; 
                }
                cha += l;
                if(cha <= k){
                    for(int j = 0; j < l; j++){
                        ans.push_back(s[i]);
                    }
                    i++;
                }
                else
                {
                    no = true;
                    break;
                }
            }
            else
            {
                ans.push_back(s[i]);
                cha++;
                if(cha > k){
                    no = true;
                    break;
                }
                i++;
            }
            
        }
        if(!no){
            cout << ans <<endl;
            
        }
        else
        {
            cout << "unfeasible" <<endl;
        }
        
    }
    
}