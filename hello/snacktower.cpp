#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector <pair <int ,int > > v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i].first);
        v[i].second = i;
    }
    int j = 0;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if(v[i].second > j){

            for (j; j < v[i].second; j++)
            {
                printf("\n");
            }
            j = v[i].second;
            // printf("%d\n",j);
        }
        printf("%d ",v[i].first);
    }
    
    
}