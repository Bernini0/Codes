#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k, m;
        scanf("%d %d", &k, &m);
        vector<int>arr;
        int c;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &c);
            arr.push_back(c-1);
            // arr[k].second = i;
        }
        // int m;
        // scanf("%d", &m);
        int gift[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &gift[i]);
        }
        // printf("shdfj\n");
        sort(arr.begin(),arr.end());
        int l = 0;
        long long int sum = 0;
        for (int i = k-1; i >= 0; i--)
        {
            if(l <= arr[i] && gift[l] <= gift[arr[i]]){
                sum += gift[l];
                l++;
            }
            else
            {
                sum += gift[arr[i]];
            }
            
        }
        printf("%lld\n",sum);
    }
    
}