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
        vector<pair<double,double>>co(n);
        int c;
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &co[i].first);
            co[i].second = 0.0;
        }
        vector<double>ans;
        for (int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n;j++){
                double ab = co[i].first*co[i].first+1;
                ab = sqrt(ab);
                double bc = sqrt(co[j].first*co[j].first+1);
                double ac = co[i].first-co[j].second;
                if(ac < 0){
                    ac = ac*(-1);
                }
                double s = (ab+bc+ac)/2.0;
                printf("%lf %lf %lf\n",ab,s,ac);
                double a = s*(s-ab)*(s-bc)*(s-ac);
                a = sqrt(a);
                printf("%lf\n",a);
                ans.push_back(a);
            }
        }
        sort(ans.begin(),ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            printf("%lf\n",ans);
        }
        
        int cnt = 1;
        for (int i = 1; i < ans.size(); i++)
        {
            if(abs(ans[i]-ans[i-1]) >= 1e-6){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    
}