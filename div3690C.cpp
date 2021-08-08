#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if(x > 45){
            printf("-1\n");
        }
        else if(x==45){
            printf("123456789\n");
        }
        else
        {
            string s;
            int k = 9;
            while (x>=k)
            {
                s.push_back(k+48);
                x-=k;
                k--;
            }
            if(x>0){
                s.push_back(x+48);
            }
            sort(s.begin(),s.end());
            cout << s <<endl;
        }
    }
    
    
}