#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int,pair<int,int>>>pr(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &pr[i].second.first, &pr[i].first);
        pr[i].second.second = i+1;
    }
    sort(pr.begin(),pr.end());
    reverse(pr.begin(),pr.end());
    int k;
    scanf("%d", &k);
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    int l = 0;
    long long int ans = 0;
    vector<pair<int,int>>v;
    while (cnt < k && l < pr.size())
    {
        int c = pr[l].second.first;
        int maxi = 100000000;
        int r= -1;
        for (int i = 0; i < k; i++)
        {
            if(arr[i]==c){
                cnt++;
                ans+= pr[l].first;
                arr[i] = -1;
                maxi = -1;
                v.push_back({pr[l].second.second,i+1});
                break;
            }
            else if(arr[i] > c){
                if(arr[i] < maxi){
                    maxi = arr[i];
                    r = i;
                }
            }
        }
        if(maxi!=-1 && maxi!= 100000000){
            ans+= pr[l].first;
            arr[r] = -1;
            cnt++;
            v.push_back({pr[l].second.second,r+1});
        }
        l++;
    }
    printf("%d %lld\n",cnt,ans);
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d %d\n",v[i].first,v[i].second);
    }
    
}