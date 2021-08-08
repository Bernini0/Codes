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
        int arr_a[n],arr_b[n],arr_c[n];
        // vector<int>cnt[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr_a[i]);
            arr_a[i]%=n;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr_b[i]);
            arr_b[i]%=n;
            // cnt[arr_b[i]].push_back(i);
        }
        int maxim = n+1;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int a = (arr_b[i]+arr_a[0])%n;
            if(a < maxim){
                maxim = a;
                v.clear();
                v.push_back(i);
            }
            else if(a==maxim){
                v.push_back(i);
            }
        }
        int k = 1;
        while (v.size()>1)
        {
            maxim = n+1;
            vector<int>v2;
            for (int i = 0; i < v.size(); i++)
            {
                int a = (arr_b[(v[i]+k)%n]+arr_a[k])%n;
                if(a < maxim){
                    maxim = a;
                    v2.clear();
                    v2.push_back(v[i]);
                }
                else if(a==maxim){
                    v2.push_back(v[i]);
                }
            }
            v.clear();
            for (int i = 0; i < v2.size(); i++)
            {
                v.push_back(v2[i]);
            }
            k++;
        }
        // printf("%d\n",v[0]);
        for (int i = 0; i < n-1; i++)
        {
            int b = v[0]+i;
            b%=n;
            // printf("b %d\n",b);
            printf("%d ",(arr_a[i]+arr_b[b])%n);
        }
        printf("%d\n",(arr_b[(v[0]+n-1)%n]+arr_a[n-1])%n);
    }
    
}