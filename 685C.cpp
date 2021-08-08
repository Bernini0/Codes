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
        string a, b;
        cin >> a >> b;
        int arr[26];
        int brr[26];
        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
        int maximum1 = -1;
        int maximum2 = -1;
        for (int i = 0; i < n; i++)
        {
            arr[a[i]-97]++;
            brr[b[i]-97]++;
            maximum1 = max(maximum1,a[i]-97);
            maximum2 = max(maximum2,b[i]-97);
        }
        string s1,s2;
        if(maximum1 > maximum2){
            printf("NO\n");
            continue;
        }
        bool yes = false;
        for (int i = 0; i < n; i++)
        {
            yes = false;   
            if(arr[b[i]-97] > 0){
                s1.push_back(b[i]);
                arr[b[i]-97]--;
                yes = true;
            }
            else{
                int c = b[i]-97;
                // printf("%d\n",c);
                for (int j = 24; j >= 0; j--)
                {
                    
                    if(j < c && arr[j] >= k){
                        arr[j]-=k;
                        arr[c] += (k-1);
                        s1.push_back(b[i]);
                        // printf("skdfs\n");
                        yes = true;
                        break;
                    }
                }
                if(yes){
                    continue;
                }
                else{
                    break;
                }
            }
        }
        if(!yes){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            // for (int i = 0; i < s1.size(); i++)
            // {
            //     printf("%c",s1[i]);
            // }
            // printf("\n");
        }
    }
    
}