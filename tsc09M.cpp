#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 1;
    
    int arr[100000+1];
    for (int i = 0; i <= 100000; i++)
    {
        arr[i] = n+1;
    }
    set<int>s;
    // memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        int p;
        vector<int> v;
        int r = 2000000000;
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &p);
            v.push_back(p);
            r = min(r, arr[p]);
        }
        s.insert(r-1);
        for (int j = 0; j < v.size(); j++)
        {
            arr[v[j]] = r-1;
        }
        
    }
    printf("%d\n",s.size());
}