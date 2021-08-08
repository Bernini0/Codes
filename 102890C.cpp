#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        
        string s;
        cin >> s;
        scanf("%d", &k);
        string ans;
        int l = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] <= 57){
                int n = 0;
                while (s[i]<= 57)
                {
                    n*= 10;
                    n += (s[i]-48);
                    i++;
                }
                for(int j = 0; j < n; j++){
                    ans.push_back(s[i]);
                    l++;
                    if(l > k){
                        l=-1;
                        break;
                    }
                }
                // cout << ans <<endl;
                if(l==-1)break;
            }
            else
            {
                ans.push_back(s[i]);
                l++;
            }
            if(l > k){
                l = -1;
                break;
            }
        }
        if(l==-1){
            printf("unfeasible\n");
        }
        else{
            cout << ans << endl;
        }
        
    }
    
}