#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int px, py;
        scanf("%d %d", &px, &py);
        string s;
        cin >> s;
        int up = 0, down = 0, right = 0, left = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'U')
            {
                up++;
            }
            else if (s[i] == 'D')
            {
                down++;
            }
            else if (s[i] == 'R')
            {
                right++;
            }
            else if (s[i] == 'L')
            {
                left++;
            }
        }
        if (px > 0 && py > 0)
        {
            if (right >= px && up >= py)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (px > 0 && py < 0)
        {
            py *= (-1);
            if (down >= py && right >= px)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (px < 0 && py > 0)
        {
            px *=(-1);
            if (up >= py && left >= px)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(px <0 && py < 0)
        {
            px *= (-1);
            py *= (-1);
            if (down >= py && left >= px)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}