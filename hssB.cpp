#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        bool yes = false;
        string s3;
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = i; j < s1.size(); j++)
            {
                s3.clear();
                for (int k = i; k <= j; k++)
                {
                    s3.push_back(s1[k]);
                }
                if(s3==s2){
                    yes = true;
                    break;
                }
                for (int l = j - 1; l >= 0; l--)
                {
                    s3.push_back(s1[l]);
                    // cout << s3 << i << j << l << endl;
                    if (s3 == s2)
                    {
                        yes = true;
                        break;
                    }
                }

                if (yes)
                    break;
            }
            if (yes)
                break;
        }
        if (yes)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}