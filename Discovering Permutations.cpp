#include <bits/stdc++.h>>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        string s;
        for (int i = 0; i < n; i++)
        {
            s += (char)'A'+i;
        }
        printf("Case %d:\n",tc);
        do
        {
            cout << s <<endl;
            k--;
        } while (next_permutation(s.begin(),s.end()) && k > 0);
        
    }
}