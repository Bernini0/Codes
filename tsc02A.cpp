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
        vector<string>s(15);
        for (int i = 2; i <= 16; i++)
        {
            int k = n;
            while (k > 0)
            {
                int x = k%i;
                k /= i;
                s[i-2].push_back(x+48);
            }
            
        }
        vector<int>v;
        for (int i = 0; i < 15; i++)
        {
            bool no = false;
            for(int j = 0; j < s[i].size()/2; j++){
                if(s[i][j]!= s[i][s[i].size()-1-j]){
                    no = true;
                    break;
                }
            }
            if(!no){
                v.push_back(i+2);
            }
        }
        if(v.size()==0){
            printf("-1\n");
            continue;
        }
        for (int i = 0; i < v.size(); i++)
        {
            printf("%d ",v[i]);
        }
        printf("\n");
    }
    
}