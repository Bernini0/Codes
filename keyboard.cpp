#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    getchar();
    char arr[n][m];
    vector<pair<int,int>>v[26];
    int cnt[26];
    memset(cnt,0,sizeof(cnt));
    vector<pair<int,int>>shifts;
    bool parbe[26];
    memset(parbe,false,sizeof(parbe));
    bool dui_hat_e_parbe[26];
    memset(dui_hat_e_parbe,false,sizeof(dui_hat_e_parbe));
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%c", &arr[i][j]);
            if(arr[i][j]=='S'){
                shifts.push_back({i,j});
            }
            else{
                v[arr[i][j]-97].push_back({i,j});
                cnt[arr[i][j]-97]++;
            }
        }
        getchar();
    }
    int q;
    scanf("%d", &q);
    getchar();
    char check[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%c", &check[i]);
    }
    bool no = false;
    int count = 0;
    for (int i = 0; i < q; i++)
    {
        if(check[i] >= 97){
            if(cnt[check[i]-97] > 0){
                continue;
            }
            else{
                no = true;
                break;
            }
        }
        else
        {
            if(cnt[check[i]-65] == 0){
                no = true;
                break;
            }
            else
            {
                if(shifts.size()==0){
                    printf("-1\n");
                    return 0;
                }
                
                bool yes = false;
                if(parbe[check[i]-65]){
                    continue;
                }
                if(dui_hat_e_parbe[check[i]-65]){
                    count++;
                    continue;
                }
                for (int k = 0; k < v[check[i]-65].size(); k++)
                {
                    for (int j = 0; j < shifts.size(); j++)
                    {
                        if((shifts[j].first-v[check[i]-65][k].first)*(shifts[j].first-v[check[i]-65][k].first)+(shifts[j].second-v[check[i]-65][k].second)*(shifts[j].second-v[check[i]-65][k].second) <= x*x)
                        {
                            parbe[check[i]-65] = true;
                            yes = true;
                            break;
                        }
                    }
                    if(yes)break;
                }
                if(!yes){
                    dui_hat_e_parbe[check[i]-65] = true;
                    count++;
                }
            }
        }
    }
    if(no){
        printf("-1\n");
    }
    else{
        printf("%d\n",count);
    }
    
}