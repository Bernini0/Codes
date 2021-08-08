#include <bits/stdc++.h>
using namespace std;
// long long int arr[200000+1];
vector<pair<int,int>>v;
int main()
{
    int n, w;
    scanf("%d %d", &n, &w);
    
    while (n--)
    {
        int s, t, p;
        scanf("%d %d %d", &s, &t, &p);
        v.push_back(make_pair(s,p));
        v.push_back(make_pair(t,-p));
    }
    // printf("sjadfjh");
    sort(v.begin(),v.end());
    
    int k = 0;
    long long int balance = 0;
    for (int i = 0; i < v.size(); i++)
    {
        balance += v[i].second;
        if(balance > w){
            printf("No\n");
            return 0;
        }
    }
   
        printf("Yes\n");
    
}