#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string s1, s2;
        cin >> s1 >> s2;
        int one = 0,two = 0;
        for (int i = 0; i < n; i++)
        {
            if(s1[i] > s2[i]){
                one++;
            }
            else if(s1[i] < s2[i]){
                two++;
            }
            else{
                one++;
                two++;
            }
        }
        if(two > one){
            printf("BLUE\n");
        }
        else if(two < one){
            printf("RED\n");
        }
        else
        {
            printf("EQUAL\n");
        }
    }
    
}