#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int ans = 0;
        string str;
        cin >> str;
        string str2 = str;

        sort(str2.begin(), str2.end());
        string str3 = str2;
        reverse(str3.begin(), str3.end());

        if (str3 == str || str2== str || str.size() < 3)
        {
            printf("13 0\n");
        }
        else
        {

            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] != str2[i])
                {
                    ans++;
                }
            }
            printf("23 %d\n", ans - 1);
        }
    }
}