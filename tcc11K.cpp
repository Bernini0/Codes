#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // scanf("%d", &n);
    string s1,s2,s3;
    cin >> n >> s1;
    s2 = s1;
    s3 = s1;
    cout << s2 << endl << s3 <<endl;
    int a, b, c;
    cin >> a >> b >> c;
    // string ans1,ans2;
    for (int i = a-1; i < a+c-1; i++)
    {
        s3[b-1] = s3[i];
        s2[b-1] = s1[i];
        b++;
        // cout << s2  << endl << s3 <<endl << endl;
    }
    cout << s3 <<endl;
    cout << s2 << endl;
}