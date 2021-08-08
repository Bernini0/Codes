#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s,t;
        cin >> s;
        t = s;
        for (int i = 0; i < 10; i++)
        {
            if(i%2==0 && s[i]=='?'){
                s[i] = '1';
                t[i] = '0';
            }
            else if(i%2==1 && s[i]=='?'){
                s[i] = '0';
                t[i] = '1';
            }
        }
        int ans = 10;
        int scored_a = 0,can_score_a = 5;
        int scored_b = 0, can_score_b = 5;
        for (int i = 0; i < 10; i++)
        {
            if(i%2==0){
                if(s[i]=='1'){
                    scored_a++;
                    can_score_a--;
                    if(can_score_b+scored_b < scored_a){
                        ans = min(ans,i+1);
                    }
                }
                else{
                    can_score_a--;
                    if(scored_a+can_score_a < scored_b){
                        ans = min(ans,i+1);
                    }
                }
            }
            else if(i%2==1){
                if(s[i]=='1'){
                    scored_b++;
                    can_score_b--;
                    if(can_score_a+scored_a < scored_b){
                        ans = min(ans,i+1);
                    }
                }
                else{
                    can_score_b--;
                    if(scored_b+can_score_b < scored_a){
                        ans = min(ans,i+1);
                    }
                }
            }
        }
        scored_a = 0;
        scored_b = 0;
        can_score_b = 5;
        can_score_a = 5;
        for (int i = 0; i < 10; i++)
        {
            if(i%2==0){
                if(t[i]=='1'){
                    scored_a++;
                    can_score_a--;
                    if(can_score_b+scored_b < scored_a){
                        ans = min(ans,i+1);
                    }
                }
                else{
                    can_score_a--;
                    if(scored_a+can_score_a < scored_b){
                        ans = min(ans,i+1);
                    }
                }
            }
            else if(i%2==1){
                if(t[i]=='1'){
                    scored_b++;
                    can_score_b--;
                    if(can_score_a+scored_a < scored_b){
                        ans = min(ans,i+1);
                    }
                }
                else{
                    can_score_b--;
                    if(scored_b+can_score_b < scored_a){
                        ans = min(ans,i+1);
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    
}