#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string n;
        cin >> n;
        char c = '1';
        for (int i = 0; i < n.size(); i++)
        {
            if(n[i]>c)c = n[i];
        }
        printf("%d\n",c-48);
    }
    
}