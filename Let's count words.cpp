#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<string> words[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        
        int k = 0;
        while (k < s.size())
        {
            int l = 0;
            string s1;
            for (int j = k; l < s.size(); j++)
            {
                if (j == s.size())
                {
                    j = 0;
                }
                s1.push_back(s[j]);
                l++;
            }
            words[i].push_back(s1);
            k++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < words[i].size(); j++)
    //     {
    //         cout << words[i][j] <<endl;
    //     }
    //     cout <<endl;
    // }
    
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        bool no = false;
        for(int j = 0; j < i; j++){
            if(i==j)continue;
            for(int k = 0; k < words[j].size(); k++){
                if(words[i][0] == words[j][k]){
                    no = true;
                    break;
                }
            }
            if(no){
                break;
            }
        }
        if(!no){
            cnt++;
        }
    }
    printf("%d\n",cnt);
}