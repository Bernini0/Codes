#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    string s, s1, s2, s3, s4, s5, s6;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 3 == 0)
        {
            s1.push_back('a');
            s2.push_back('a');
            s3.push_back('b');
            s4.push_back('b');
            s5.push_back('c');
            s6.push_back('c');
        }
        else if (i % 3 == 1)
        {
            s1.push_back('b');
            s2.push_back('c');
            s3.push_back('a');
            s4.push_back('c');
            s5.push_back('a');
            s6.push_back('b');
        }
        else if (i % 3 == 2)
        {
            s1.push_back('c');
            s2.push_back('b');
            s3.push_back('c');
            s4.push_back('a');
            s5.push_back('b');
            s6.push_back('a');
        }
    }
    // cout << s4 << endl << s6 <<endl;
    int arr[6][s.size()];
    memset(arr, 0, sizeof(arr));
    int cnt[7];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s1[i])
            cnt[1]++;
        if (s[i] != s2[i])
            cnt[2]++;
        if (s[i] != s3[i])
            cnt[3]++;
        if (s[i] != s4[i])
            cnt[4]++;
        if (s[i] != s5[i])
            cnt[5]++;
        if (s[i] != s6[i])
            cnt[6]++;
        arr[0][i] = cnt[1];
        arr[1][i] = cnt[2];
        arr[2][i] = cnt[3];
        arr[3][i] = cnt[4];
        arr[4][i] = cnt[5];
        arr[5][i] = cnt[6];
    }
    for (int i = 0; i < m; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        l--;
        r--;
        int ans = 10000000;
        int k;
        for (int j = 0; j < 6; j++)
        {
            int a, b;
            if (l == 0)
            {
                a = 0;
            }
            else
                a = arr[j][l-1];
            b = arr[j][r];
            if(b-a < ans){
                ans = b-a;
                k = j;
            }
        }
        printf("%d\n", ans);
    }
}