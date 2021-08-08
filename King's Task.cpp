#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> s, s1, s2;
    vector<int>arr(2*n);
    for (int i = 0; i < 2*n; i++)
    {
        scanf("%d", &arr[i]);
        arr[i]-=1;
    }
    n*=2;
    vector<vector<int>>v1,v2;
    for (int i = 0; i < n; i++)
    {
        s.push_back(i);
    }
    int cnt1 = 1, cnt2 = 1;
    for (int i = 0; i < n; i += 2)
    {
        s1.push_back(s[i + 1]);
        s1.push_back(s[i]);
    }
    s2 = s;
    for (int i = 0; i < n / 2; i++)
    {
        s2[i] = s[(n / 2) + i];
        s2[(n / 2) + i] = s[i];
    }
    v1.push_back(s);
    v1.push_back(s1);
    v2.push_back(s);
    v2.push_back(s2);
    while (1)
    {
        if (cnt1 % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                int temp = s1[i];
                s1[i] = s1[i + 1];
                s1[i + 1] = temp;
            }
            cnt1++;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                int temp = s1[i];
                s1[i] = s1[(n / 2) + i];
                s1[(n / 2) + i] = temp;
            }
            cnt1++;
        }
        if(cnt2%2==0){
            for (int i = 0; i < n / 2; i++)
            {
                int temp = s2[i];
                s2[i] = s2[(n / 2) + i];
                s2[(n / 2) + i] = temp;
            }
            cnt2++;
        }
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                int temp = s2[i];
                s2[i] = s2[i + 1];
                s2[i + 1] = temp;
            }
            cnt2++;
        }
        bool yes = false;
        for (int i = 0; i < v1.size(); i++)
        {
            bool no = false;
            for(int j = 0; j < n; j++){
                if(v1[i][j]!=s2[j]){
                    no = true;
                    break;
                }
            }
            if(!no){
                yes = true;
                break;
            }
        }
        for (int i = 0; i < v2.size(); i++)
        {
            bool no = false;
            for(int j = 0; j < n; j++){
                if(v2[i][j]!=s1[j]){
                    no = true;
                    break;
                }
            }
            if(!no){
                yes = true;
                break;
            }
        }
        if(yes)break;
        else{
            v1.push_back(s1);
            v2.push_back(s2);
        }
    }
    int ans = 10001;
    for (int i = 0; i < v1.size(); i++)
    {
        bool no = false;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]!=v1[i][j]){
                no = true;
                break;
            }
        }
        if(!no){
            ans = min(ans,i);
            break;
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        bool no = false;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]!=v2[i][j]){
                no = true;
                break;
            }
        }
        if(!no){
            ans = min(ans,i);
            break;
        }
    }
    if(ans==10001){
        printf("-1\n");
    }
    else printf("%d\n",ans);
}