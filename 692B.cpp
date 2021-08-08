#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    vector<int>v;
    int m;
    cin >> m;
    for (int i = 0; i < 10; i++)
    {
        if(s[i]=='1'){
            v.push_back(i+1);
        }
    }
    int arr[1010];
    int k = -1;
    int n = 0, p = 0;
    sort(v.begin(),v.end());
    if(v.size()==1 && v[0]==1){
        if(m==1){
            printf("YES\n");
            printf("1\n");
            return 0;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    if(v.empty()){
        printf("NO\n");
        return 0;
    }
    if(v[0]==1){
        v[0] = 0;
    }
    for (int i = 0;; i++)
    {
        if(i == m)break;
        else if(i%2== 0){
            bool kau = false;
            for(int j = 0; j < v.size(); j++){
                if(n+v[j] > p && v[j]!= k){
                    arr[i] = v[j];
                    k = v[j];
                    n += v[j];
                    kau = true;
                    break;
                }
            }
            if(!kau){
                printf("NO\n");
                return 0;
            }
        }
        else if(i%2==1){
            bool kau = false;
            for(int j = 0; j < v.size(); j++){
                if(p+v[j] > n && v[j]!= k){
                    arr[i] = v[j];
                    k = v[j];
                    p += v[j];
                    kau = true;
                    // printf("%d\n",p);
                    break;
                }
            }
            if(!kau){
                printf("NO\n");
                return 0;
            }
        }

    }
    printf("YES\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ",arr[i]);
    }
    
}