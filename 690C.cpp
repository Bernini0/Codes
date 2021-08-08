#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<int>arr(n);
        vector<int>arr2(n);
        for (int i = 0; i <n; i++)
        {
            scanf("%d", &arr[i]);
            arr2[i] = arr[i];
        }
        vector<int>arr3(n);
        double ans = 0;
        int r;
        double p;
        sort(arr2.begin(),arr2.end());
        int k = 1000000;
        bool ys = false;
        double c;
        if(arr==arr2){
            c = 1.0;
            ys = true;
        }
        while (m--)
        {
            
            scanf("%d %lf", &r, &p);
            if(ys)continue;
            if(r < k){
                arr3 = arr;
                sort(arr3.begin(),arr3.begin()+r);
            }
            if(arr3==arr2 || r>= k){
                if(k > r){
                    k = r;
                }
                if(abs(ans+0)<= 1e-8){
                    ans = p;
                }
                else
                {
                    ans = ans + p - (ans*p);
                }
            }
        }
        if(ys){
            printf("%lf\n",c);
        }
        else{
        printf("%lf\n",ans);
        }
    }
    
}