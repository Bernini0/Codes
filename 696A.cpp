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
        string s,ans;
        cin >> s;
        if(s[0]=='1'){
            ans.push_back('2');
        }
        else
        {
            ans.push_back('1');
        }
        
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]+1==ans[i-1]){
                ans.push_back(s[i]);
            }
            else
            {
                ans.push_back(s[i]+1);
            }
            
        }
        for (int i = 0; i <ans.size(); i++)
        {
            printf("%c",ans[i]-s[i]+48);
        }
        printf("\n");
    }
    
}