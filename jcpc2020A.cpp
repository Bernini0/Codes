#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    vector<int> v;
    int n = 17;
    v.push_back(n);
    v.push_back(n - 1);
    int k = 1;
    for (int i = n-2; i >= 2; i--)
    {
        int k = v.size();
        v.push_back(n);
        v.push_back(i);
        if(i==2)break;
        for(int j = 0; j < k ; j++){
            v.push_back(v[j]);
        }
    }
    
    int l = v.size();
    // printf("%d\n",l);
    
    for (int i = 0; i < l - 2; i++)
    {
        v.push_back(v[i]);
    }
    l = v.size();
    v.push_back(n);
    v.push_back(1);
    l = v.size();
    for (int i = 0; i < l - 1; i++)
    {
        v.push_back(v[i]);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}