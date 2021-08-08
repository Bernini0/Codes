#include <bits/stdc++.h>
using namespace std;
vector<int>subsets[100000];
int k = 0;
void subset_generator_using_bit_representation(int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
        for(int j = 0; j < n; j++){
            if(i&(1 <<j)){
               subsets[k].push_back(j); 
            }
        }
        k++;
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    subset_generator_using_bit_representation(n);
    printf("%d\n",k);
}