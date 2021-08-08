#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int,pair<int,int>>>coor(n);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &coor[i].second.first, &coor[i].second.second);
        coor[i].first = abs(coor[i].second.first)+abs(coor[i].second.second);
        if(coor[i].second.first==0){
            k += 2;
        }
        else if(coor[i].second.second==0){
            k += 2;
        }
        else
        {
            k += 3;
        }

    }
    printf("%d\n",k*2);
    sort(coor.begin(),coor.end());
    for (int i = 0; i < n; i++)
    {
        if(coor[i].second.first == 0){
            if(coor[i].second.second > 0){
            printf("1 %d U\n",coor[i].second.second);
            printf("2\n");
            printf("1 %d D\n",coor[i].second.second);
            printf("3\n");
            }
            else
            {
            printf("1 %d D\n",abs(coor[i].second.second));
            printf("2\n");
            printf("1 %d U\n",abs(coor[i].second.second));
            printf("3\n");
            }
        }
        else if(coor[i].second.second == 0)
        {
            if(coor[i].second.first > 0){
            printf("1 %d R\n",coor[i].second.first);
            printf("2\n");
            printf("1 %d L\n",coor[i].second.first);
            printf("3\n");
            }
            else
            {
            printf("1 %d L\n",abs(coor[i].second.first));
            printf("2\n");
            printf("1 %d R\n",abs(coor[i].second.first));
            printf("3\n");
            }
        }
        else if(coor[i].second.first > 0){
            if(coor[i].second.second > 0){
                printf("1 %d R\n",coor[i].second.first);
                printf("1 %d U\n",coor[i].second.second);
                printf("2\n");
                printf("1 %d D\n",coor[i].second.second);
                printf("1 %d L\n",coor[i].second.first);
                printf("3\n");
            }
            else
            {
                printf("1 %d R\n",coor[i].second.first);
                printf("1 %d D\n",abs(coor[i].second.second));
                printf("2\n");
                printf("1 %d U\n",abs(coor[i].second.second));
                printf("1 %d L\n",coor[i].second.first);
                printf("3\n");
            }
        }
        else if(coor[i].second.first < 0)
        {
            if(coor[i].second.second > 0){
                printf("1 %d L\n",abs(coor[i].second.first));
                printf("1 %d U\n",coor[i].second.second);
                printf("2\n");
                printf("1 %d D\n",coor[i].second.second);
                printf("1 %d R\n",abs(coor[i].second.first));
                printf("3\n");
            }
            else
            {
                printf("1 %d L\n",abs(coor[i].second.first));
                printf("1 %d D\n",abs(coor[i].second.second));
                printf("2\n");
                printf("1 %d U\n",abs(coor[i].second.second));
                printf("1 %d R\n",abs(coor[i].second.first));
                printf("3\n");
            }
        }
    }
    
}