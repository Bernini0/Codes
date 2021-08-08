#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,p,k;
        cin >>n >> p >> k;
        string s;
        cin >> s; 
        int x, y;
        cin >> x >> y;
        int l = x/y;
        long long int ans = 0;
        for (int i = p-1; i < s.size(); i+= k)
        {
            if(s[i]!='1'){
                int cnt = 0;
                int j = i;
                while (s[j]!='1' && j < s.size())
                {
                    j++;
                }
                if(j-i > l){
                    ans += x;
                    // printf("1. %d\n",ans);
                }
                else{
                    ans += (j-i)*y;
                    // printf("2. %d\n",ans);
                    for (int r = i; r < j; r++)
                    {
                        s.erase(s.begin()+i);
                    }
                    
                }
            }
        }
        cout << ans <<endl;
    }
    
}