#include <bits/stdc++.h>
using namespace std;
vector<int>subsets[100000];
vector<int> subset;
int n, j = 0;
void subsets_generator(int k)
{
    if(k==n){
        for (int i = 0; i < subset.size(); i++)
        {
            subsets[j].push_back(subset[i]);
        }
        j++;
    }
    else
    {
        
        subsets_generator(k+1);
        subset.push_back(k);
        
        subsets_generator(k+1);
        subset.pop_back();
    }
    
}
int main()
{
    scanf("%d", &n);
    subsets_generator(0);
    // for (int i = 0; i < j; i++)
    // {
    //     for(int j = 0; j < subsets[i].size(); j++){
    //         printf("%d ",subsets[i][j]);
    //     }
    //     printf("\n");
    // }
    
    printf("%d\n",j);
}