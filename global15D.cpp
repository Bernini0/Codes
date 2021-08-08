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
        int arr[n];
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr[i] = abs(arr[i]);
            if(arr[i]==0)zero++;
        }
        if(zero>0){
            printf("YES\n");
            continue;
        }
        set<int>subset_sums;
        for (int i = 0; i < (1 <<n); i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++){
                if(i & (1 << j))sum+= arr[j];
            }
            subset_sums.insert(sum);
        }
        if(subset_sums.size() <(1<<n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}