#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value[5][5];
    int p[5];
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &value[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
    }
    
    int ans = -1;
    int temp;
    do
    {
        temp = value[p[0]][p[1]] + value[p[1]][p[0]];
        temp += value[p[2]][p[3]] + value[p[3]][p[2]];
        temp += value[p[1]][p[2]] + value[p[2]][p[1]];
        temp += value[p[3]][p[4]] + value[p[4]][p[3]];
        temp += value[p[2]][p[3]] + value[p[3]][p[2]];
        temp += value[p[3]][p[4]] + value[p[4]][p[3]];

        if (temp > ans)
        {
            ans = temp;
        }
    }
    while(next_permutation(p,p+5));
    printf("%d\n", ans);
}