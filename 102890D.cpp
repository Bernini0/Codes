#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    vector<string>v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    int cnt = 1;
    for (int i = 0; i < t-1; i++)
    {
        
        for(int j = i+1; j < t; j++){
            vector<int>pos;
            if(v[i].size()!=v[j].size())continue;
            for (int k = 0; k < v[j].size(); k++)
            {
                if(v[j][k]==v[i][0]){
                    pos.push_back(k);
                }
            }
            for (int l = 0; l < pos.size(); l++)
            { 
            }
            
            
        }
    }
    printf("%d\n",cnt);
}