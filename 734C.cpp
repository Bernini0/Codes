#include <bits/stdc++.h>
using namespace std;
typedef struct info
{
    int a;
    int b;
    int c;
    int d;
    int e;
}info;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<info>v(n);
        vector<pair<int,int>>p[5];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v[i].a = 0,v[i].b = 0,v[i].c = 0,v[i].d = 0, v[i].e = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j]=='a')v[i].a++;
                else if(s[j]=='b')v[i].b++;
                else if(s[j]=='c')v[i].c++;
                else if(s[j]=='d')v[i].d++;
                else v[i].e++;
            }
            int a = v[i].a, b = v[i].b, c = v[i].c, d = v[i].d, e = v[i].e;
            v[i].a -= (b+c+d+e);
            v[i].b -= (a+c+d+e);
            v[i].c -= (b+a+d+e);
            v[i].d -= (b+c+a+e);
            v[i].e -= (b+c+d+a);
            p[0].push_back({v[i].a,i});
            p[1].push_back({v[i].b,i});
            p[2].push_back({v[i].c,i});
            p[3].push_back({v[i].d,i});
            p[4].push_back({v[i].e,i});
        }
        sort(p[0].begin(),p[0].end());
        sort(p[1].begin(),p[1].end());
        sort(p[2].begin(),p[2].end());
        sort(p[3].begin(),p[3].end());
        sort(p[4].begin(),p[4].end());
        int ans = 0;
        int c = 0;
        for (int i = 0; i < 5; i++)
        {
            int b = 0;
            int cnt = 0;
            for(int j = n-1; j>= 0; j--){
                // printf("%d %d %d\n",i,p[i][j].first,p[i][j].second);
                b+= p[i][j].first;
                if(b <= 0){
                    break;
                }
                cnt++;
            }
            if(cnt > ans){
                ans = cnt;
                c = i;
            }
        }
        printf("%d\n",ans);
    }
    
}