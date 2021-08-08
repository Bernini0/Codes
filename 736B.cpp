#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        string a, b;
        scanf("%d", &n);
        cin >> a >> b;
        int cnt = 0;
        // for (int i = 0; i < b.size()-1; i++)
        // {
        //     if(b[i]=='1' && b[i+1]=='1' && a[i]=='1' && a[i+1]=='1'){
        //         b[i] = '0';
        //         b[i+1] = '0';
        //         a[i] = '8';
        //         a[i+1] = '8';
        //         cnt+= 2;
        //     }
        // }
        for (int i = 0; i < a.size(); i++)
        {
            if(b[i]=='1' && (a[i]=='0')){
                cnt++;
                a[i] = '8';
            }
            else if(b[i]=='1' &&  (i-1>=0 && a[i-1]=='1') ){
                cnt++;
                a[i-1] = '8';
            }
            else if(b[i]=='1' && (i+1 < a.size() && a[i+1]=='1')){
                cnt++;
                a[i+1] = '8';
            }
        }
        printf("%d\n",cnt);
    }
    
}