#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<string>v(n);
    int cnt = 2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 0; j < v[i].size(); j++)
        {
            if(v[i][j]=='+'){
                cnt++;
                break;
            }
        }
        cnt++;
    }
    if(cnt==13){
        cnt++;
    }
    printf("%d00\n",cnt);
}