#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        string s;
        cin >> s;
        int right = 0, left = 0;
        int mine = 0;
        bool no = false;
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='('){
                k = 0;
                while (i < s.size())
                {
                    if(s[i]=='(' && k==1){
                        i--;
                        break;
                    }
                    if(s[i]=='(' && k==0){
                        right++;
                        i++;
                    }
                    else if(s[i]=='}'){
                        left++;
                        k = 1;
                        i++;
                    }
                    else if(s[i]=='?'){
                        mine++;
                        i++;
                    }
                }
                if((mine - abs(right-left))/2 >= 0 && (mine - abs(right-left))%2==0){
                    right = 0;
                    left = 0;
                    mine = 0;
                    continue;
                }
                else
                {
                    no = true;break;
                }
                
            }
            else if(s[i]==')'){
                left++;
                if((mine - abs(right-left))/2 >= 0 && (mine - abs(right-left))%2==0){
                    right = 0;
                    left = 0;
                    mine = 0;
                    continue;
                }
                else
                {
                    no = true;break;
                }
            }
            else if(s[i]=='?'){
                mine++;
            }
        }
        if(no)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    
}