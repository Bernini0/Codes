#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n];
        int arr2[m];
        int cnt1[101];
        int cnt2[101];
        memset(cnt1,0,sizeof(cnt1));
        memset(cnt2,0,sizeof(cnt2));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            cnt1[arr[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr2[i]);
            cnt2[arr2[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < 101; i++)
        {
            if(cnt1[i] != 0 && cnt1[i]==cnt2[i]){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        
    }
    
}