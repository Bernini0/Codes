#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        string s;
        cin >> s;
        int cnt = 0;
        bool yes = false;
        if(k==0){
            printf("YES\n");
            continue;
        }
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - 1 - i])
            {
                cnt++;
            }
            else{
                break;
            }
            if (cnt == k)
            {
                if (n % 2 && i != (n / 2))
                {
                    yes = true;
                }
                else if (n % 2 == 0 && i != (n / 2 - 1))
                {
                    yes = true;
                }
                break;
            }
        }
        if (yes)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}