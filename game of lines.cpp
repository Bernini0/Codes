#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n) && n !=0)
    { 
        int l = (n*(n-1));
        double arr[l];
        vector<pair<double,double>>co_ordinates;
        while (n--)
        {
            double a, b;
            scanf("%lf %lf", &a, &b);
            co_ordinates.push_back(make_pair(a,b));
        }
        int j = 0;
        for (int i = 0; i < co_ordinates.size(); i++)
        {
            for (int k = 0; k < co_ordinates.size(); k++)
            {
                if(i==k)continue;
                else if(fabs(co_ordinates[i].first-co_ordinates[k].first) <= 1e-4){
                    arr[j] = 10000000.005;
                    j++;
                }
                else{
                    arr[j] = (double)(((co_ordinates[i].second-co_ordinates[k].second)*1.0)/(co_ordinates[i].first-co_ordinates[k].first));
                    // printf("%lf\n",arr[j]);
                    j++;
                }
            }
            
        }
        int cnt = 1;
        // printf("%d\n",j);
        sort(arr,arr+l);
        // printf("%d\n",l);
        for (int i = 1; i < l; i++)
        {
            if(fabs(arr[i]-arr[i-1]) >= 1e-8){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        
    }
}