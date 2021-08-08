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
        
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                cnt1++;
            else if (s[i] == 'B')
                cnt2++;
            else
            {
                cnt3++;
            }
        }
        char c1,c2;
        if (cnt1 > cnt2){
            swap(cnt1, cnt2);
            c1 = 'B';
        }
        else{
            c1 = 'A';
        }
        if (cnt2 > cnt3){
            swap(cnt2, cnt3);
            c2 = 'C';
        }
        else
        {
            c2 = 'B';
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==c1){
                s[i]= c2;
            }
        }
        // cout << s <<endl;
        if (s[0] == s[s.size() - 1])
        {
            printf("NO\n");
            continue;
        }
        else if (cnt3 == cnt2 + cnt1){
            cnt1 = 0, cnt2 = 0;
            bool no = false;
            c2 = s[0];
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]!=c2){
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
                if(cnt1 > cnt2){
                    no = true;
                    break;
                }
            }
            if(no){
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
}