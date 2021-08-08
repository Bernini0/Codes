#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < s.size(); j++)
            {
                int p = 0;
                if(s[j] >= 48 && s[j] <= 57 && j <s.size()){
                    while (s[j] >= 48 && s[j] <= 57 && j < s.size())
                    {
                        
                        p*=10;
                        p+= (s[j]-48);
                        j++;
                    }
                    arr[i] = p;
                }
            }
            
        }
        sort(arr,arr+n);
        for (int i = 0; i < k-1; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("%d\n",arr[k-1]);
    }
    
}