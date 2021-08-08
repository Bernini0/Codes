#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int p , l;
        scanf("%d %d", &p, &l);
        vector<int>v;
        int a = p-l;
        if(p-l <= 0){
            printf("Case %d: impossible\n",tc);
            continue;
        }
        for (int i = 1; i <= sqrt(a); i++)
        {
            if(a%i==0){
                if(i>l){
                v.push_back(i);
                }
                if(a/i != i && a/i > l){
                    v.push_back(a/i);
                }
            }
        }
        if(v.size()==0){
            printf("Case %d: impossible\n",tc);
        }
        else
        {
            printf("Case %d:",tc);
            sort(v.begin(),v.end());
            for (int i = 0; i < v.size(); i++)
            {
                printf(" %d",v[i]);
            }
            printf("\n");
        }
        
    }
}