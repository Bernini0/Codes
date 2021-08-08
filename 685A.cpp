#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        string s;
        cin >> s;
        while (m--)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            string s1;
            for (int i = u-1; i < v; i++)
            {
                s1.push_back(s[i]);
            }
            int cnt = 0;
            int k = 0;
            bool yes = false;
            if(s1.size()==1){
                printf("NO\n");
                continue;
            }
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]==s1[k] && cnt < s1.size()-1){
                    k++;
                    cnt++;
                    if(k >= s1.size()){
                        yes = true;
                        break;
                    }
                }
                else if(s[i]!=s1[k] || cnt == s1.size()-1){
                    cnt = 0;
                }
            }
            if(yes){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        
    }
    
}