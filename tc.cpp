#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        char s[200000+1];
        scanf("%d %d %s", &n, &m, s);
        n--;
        m--;
        int k = strlen(s);
        int cnt = 0;
        int up = 0, down = 0, left = 0, right = 0;
        for (int i = 0; i < k; i++)
        {
            if(s[i]=='^'){
                up++;
                if(up>n){
                    up = n;
                    cnt++;
                }
                down--;
                if(down<0){
                    down = 0;
                }
            }
            else if(s[i]=='v'){
                down++;
                if(down> n){
                    down = n;
                    cnt++;
                }
                up--;
                up = max(up,0);
            }
            else if(s[i]== '>'){
                right++;
                if(right>m){
                    right = m;
                    cnt++;
                }
                left--;
                left = max(left,0);
            }
            else if(s[i]=='<'){
                left++;
                if(left>m){
                    left = m;
                    cnt++;
                }
                right--;
                right = max(right,0);
            }
        }
        printf("%d\n",cnt);
    }
    
}