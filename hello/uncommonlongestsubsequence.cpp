#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
    int cnt = 0;
    int arra[26];
    int arrb[26];
    int cnta[26];
    int cntb[26];
    memset(cnta,0,sizeof(cnta));
    memset(cntb,0,sizeof(cntb));
    memset(arra, 0, sizeof(arra));
    memset(arrb, 0, sizeof(arrb));
    if (a.size() < b.size())
    {
        cout << b.size() << endl;
        return 0;
    }
    else if (a == b)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        cout << a.size()<<endl;
    }
    
    // else
    // {
        
    //     for (int i = 0; i < a.size(); i++)
    //     {
    //         arra[a[i] - 97] = i;
    //         cnta[a[i]-97]++;
    //     }
    //     for (int i = 0; i < b.size(); i++)
    //     {
    //         arrb[b[i] - 97] = i;
    //         cntb[b[i]-97]++;
    //     }
    //     for (int i = 0; i < 26; i++)
    //     {
    //         if(cntb[i]>cnta[i]){
    //             printf("%d\n",b.size());
    //             return 0;
    //         }
    //     }
        
    //     for (int i = b.size()-1; i >= 0; i--)
    //     {
    //         if(arrb[b[i]-97]>arra[b[i]-97]){
    //             printf("%d\n",b.size());
    //             return 0;
                
    //         }
    //     }
        
    // }
    // printf("-1\n");
    // return 0;
}