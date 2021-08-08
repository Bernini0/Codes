#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, amount;
    scanf("%d %d", &n, &amount);
    int arr[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    // printf("%d\n",arr[1][2]);
    string s;
    vector<int>v;
    int k = 0;
    for (int i = 2; i <=n; i++)
    {
        s.push_back(i+48);
    }
    do
    {
        v.push_back(arr[1][s[0]-48]);
        // printf("%d\n",v[k]);
        for (int i = 1; i < s.size(); i++)
        {
            v[k] += arr[s[i-1]-48][s[i]-48];
        }
        v[k] += arr[s[s.size()-1]-48][1];
        k++;
    } while (next_permutation(s.begin(),s.end()));
    // printf("%d\n",v[0]);
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==amount){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    
}