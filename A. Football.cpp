#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int one = 0;
    int zero = 0;
    for (int i = 0; i < s.size(); )
    {
        if(s[i]=='0'){
            one = 0;
            while (s[i]=='0')
            {
                
                zero++;
                i++;
                if(zero>=7){
                    printf("YES\n");
                    return 0;
                }
                if(s.size()-1==i)break;
            }
            
        }
        else
        {
            zero = 0;
            while (s[i]=='1')
            {
                
                one++;
                i++;
                if(one >= 7){
                    printf("YES\n");
                    return 0;
                }
                if(i==s.size()-1)break;
            }
            
        }
        
    }
    printf("NO\n");
}