#include <bits/stdc++.h>
using namespace std;
int arr[8];
int f(string a, int pos)
{
    int b = 0;
    for (int i = pos; i < pos+8; i++)
    {
        b += (a[i]-48)*arr[pos-i+7];
    }
    return b;
}

int main()
{
    int t;
    scanf("%d", &t);
    arr[0] = 1;
    for (int i = 1; i < 8; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }
    for (int tc = 1; tc <= t; tc++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int a = f(s2,0);
        int b = f(s2,9);
        int c = f(s2,18);
        int d = f(s2,27);
        int aar[4];
        memset(aar,0,sizeof(aar));
        int l = 0;
        for (int i = 0; i < s1.size();)
        {
            int p = 1;
            while (s1[i]!='.'&&i<s1.size())
            {
                aar[l] *= 10;
                aar[l] += (s1[i]-48);
                i++;
            }
            l++;
            i++;
        }
        // printf("%d %d %d %d %d %d %d %d\n",aar[0],aar[1],aar[2],aar[3],a,b,c,d);
        
        if(aar[0]==a && aar[1] == b && aar[2]==c && aar[3]==d)printf("Case %d: Yes\n",tc);
        else
        {
            printf("Case %d: No\n",tc);
        }
        
    }
}