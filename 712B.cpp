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
        string s1, s2;
        cin >> s1 >> s2;
        int zero1 = 0, zero2 = 0;
        int one1 = 0, one2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s1[i]=='1')one1++;
            else zero1++;
            if(s2[i]=='1')one2++;
            else zero2++;
        }
        // if(one1!=one2){
        //     printf("NO\n");
        //     continue;
        // }
        int cnt = 0;
        // memset(cnt,0,sizeof(cnt));
        bool yes = true;
        for (int i = n-1; i >= 0; i--)
        {
            if(cnt%2==1){
                if(s1[i]=='1')s1[i] = '0';
                else s1[i]='1';
            }
            if(s2[i]==s1[i]){
                if(s1[i]=='1')one1--;
                else zero1--;
            }
            else{
                if(zero1==one1){
                    cnt++;
                    if(s2[i]=='1')one1--;
                    else zero1--;
                }
                else{
                    // printf("%d %d %d\n",i,zero1,one1);
                    yes = false;
                    break;
                }
            }
        }
        if(yes)printf("YES\n");
        else printf("NO\n");
    }
    
}