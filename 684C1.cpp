#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,pair<int,int>>>v1;
vector<pair<pair<int,int>,pair<int,int>>>v2;
void four(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
                printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                printf("%d %d %d %d %d %d",v1[i].second.first,v2[i].second.first,v2[i].second.second);
                printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.first,v2[i].second.first);
}
void three_one(int i){
    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
}
void three_two(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
}
void three_three(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
}
void three_four(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.first);
}
void two_one_two(int i)
{
    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
}
void two_one_three(int i)
{
    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
}
void two_one_four(int i){
    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].first.second,v2[i].second.first);
}
void two_two_three(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
}
void two_two_four(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].first.second,v2[i].second.first);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].second.first,v2[i].second.second);
}
void one_one(int i){
    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.first);
    four(i);
}
void one_two(int i){
    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].first.second,v2[i].second.first);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d ", &n, &m);
        int arr[n][m];
        char c;
        getchar();
        
        vector<int>cnt;
        for (int i = 0; i < n; i++)
        {
            for(int j =0; j < m; j++){
                scanf("%c", &c);
                arr[i][j] = c-48;
            }
        }
        long long int x = 0;
        int one = 0;
        for (int i = 0; i < m -1; i++)
        {
            for(int j = 0; j < n-1; j++){
                one = 0;
                if(j==0){
                    if(arr[j][i]==1)one++;
                    if(arr[j][i+1]==1)one++;
                }
                if(arr[j+1][i]==1)one++;
                if(arr[j+1][i+1]==1)one++;
                cnt.push_back(one);
                x += one;
                v1.push_back(make_pair(make_pair(j,i),make_pair(j,i+1)));
                v2.push_back(make_pair(make_pair(j+1,i),make_pair(j+1,i+1)));
            }
        }
        printf("%lld\n",x);
        for (int i = 0; i < cnt.size(); i++)
        {
            if(cnt[i]==4){
                printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
                printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                printf("%d %d %d %d %d %d",v1[i].second.first,v2[i].second.first,v2[i].second.second);
                printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.first,v2[i].second.first);
            }
            else if(cnt[i]==3){
                if(v1[i].first.first==0){
                    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
                }
                else if(v1[i].first.second==0){
                    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
                }
                else if(v2[i].second.first==0){
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                }
                else {
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.first);
                }
            }
            else if(cnt[i]==2){
                if(v1[i].first.first==1 && v1[i].first.second ==1){
                    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
                }
                else if(v1[i].first.first==1 && v2[i].second.first==1){
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                }
                else if(v1[i].first.first==1 && v2[i].second.second==1){
                    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].first.second,v2[i].second.first);
                }
                else if(v1[i].first.second==1 && v2[i].second.first==1){
                    printf("%d %d %d %d %d %d",v1[i].first.first,v2[i].second.first,v2[i].second.second);
                    printf("%d %d %d %d %d %d",v1[i].first.first,v1[i].first.second,v2[i].second.second);
                }
            }
            else if(cnt[i]==1){
                if(v1[i].first.first==1){
                    printf("%d %d %d %d %d %d",v1[i].first.second,v2[i].second.first,v2[i].second.second);
                }
            }
        }
        
        
    }
    
}