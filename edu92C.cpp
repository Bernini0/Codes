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
        char a = '0';
        char b = '0';
        int n = s.size();
        int ans1 = 0;
        while (a <= '9')
        {
            string ans;
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                if (k % 2 == 0 && s[i] == a)
                {
                    ans.push_back(a);
                    k++;
                }
                else if (k % 2 == 1 && s[i] == b)
                {
                    ans.push_back(b);
                    k++;
                }
            }
            if(ans.size()>2 && ans[1]!=ans[ans.size()-1]){
                int p = ans.size()-1;
                ans1 = max(ans1,p);
            }
            else{
                int p = ans.size();
                ans1 = max(ans1,p);
            }
            if(b=='9'){
                b = '0';
                a += 1;
            }
            else{
                b += 1;
            }
        }
        printf("%d\n",n-ans1);
    }
}