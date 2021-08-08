#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        vector<pair<int,int>>acs(k);
        int a;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &a);
            acs[i].second = a-1;
        }
        for(int i = 0; i < k; i++){
            scanf("%d", &acs[i].first);
        }
        sort(acs.begin(),acs.end());
        // for (int i = 0; i < acs.size(); i++)
        // {
        //     printf("%d %d\n", acs[i].first,acs[i].second);
        // }
        for(int i = 0; i < n; i++){
            arr[i] = 2000000000;
        }
        for (int i = 0; i < k; i++)
        {
            if(i > 0 && arr[acs[i].second] <= acs[i].first)continue;
            else
            {
                arr[acs[i].second] = acs[i].first;
                int x = acs[i].first+1;
                for(int j = acs[i].second-1; j >= 0; j--){
                    if(arr[j] <= x)break;
                    else{
                        arr[j] = x;
                        x++;
                    }
                }
                x = acs[i].first+1;
                for(int j = acs[i].second+1; j < n; j++){
                    if(arr[j] <= x)break;
                    else{
                        arr[j] = x;
                        x++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}