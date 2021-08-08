#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==1)a++;
    }
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        vector<int>v2;
        int zero = 0;
        for(int j = i; j < n; j++)
        {
            if(arr[j]==1)zero--;
            else zero++;
            v2.push_back(a+zero);
        }
        sort(v2.begin(),v2.end());
        v.push_back(v2[v2.size()-1]);
    }
    sort(v.begin(),v.end());
    printf("%d\n",v[v.size()-1]);
}