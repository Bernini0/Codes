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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int ans1[n],ans2[n];
        ans1[0] = ans2[0] = arr[0];
        int a = arr[0];
        set<int>s1,s2;
        for (int i = 1; i <= n; i++)
        {
            s1.insert(i);
            s2.insert(i);
        }
        s1.erase(arr[0]);
        s2.erase(arr[0]);
        // printf("jskhfsaf\n");
        for (int i = 1; i < n; i++)
        {
            if(arr[i] > a){
                ans1[i] = ans2[i] = arr[i];
                s2.erase(arr[i]);
                s1.erase(arr[i]);
                a = arr[i];
            }
            else{
                ans2[i] = *(s2.begin());
                s2.erase(s2.begin());
                // printf("suiar\n");
                auto b = s1.lower_bound(a);
                // printf("%d\n",*(--b));
                ans1[i] = *(--b);
                s1.erase(b);
                // printf("kjzshdf\n");
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",ans2[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ",ans1[i]);
        }
        printf("\n");
        
    }
    
}