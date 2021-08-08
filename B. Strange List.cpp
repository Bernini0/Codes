#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        vector<pair<long long int ,long long int>>arr(n);
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i].first);
            arr[i].second = arr[i].first;
        }
        bool no = false;
        for (int i = 0; i < arr.size(); i++)
        {
            sum+= arr[i].second;
            if(arr[i].first%x==0 && !no){
                arr.push_back({arr[i].first/x,arr[i].second});
            }
            else
            {
                no = true;
            }
            
        }
        printf("%lld\n",sum);
    }
    
}