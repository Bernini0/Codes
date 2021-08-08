#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        // getchar();
        string a;
        cin >> a;
        int b;
        scanf("%d", &b);
        b = abs(b);
        if(a[0]=='-'){
            a.erase(a.begin()+0);
        }
        // for (int i = 0; i < a.size(); i++)
        // {
        //     printf("%c",a[i]);
        // }
        // printf("\n");
        if(a[0]=='0'){
            printf("Case %d: divisible\n",tc);
            continue;
        }
        int arr[a.size()];

        for (int i = 0; i < a.size(); i++)
        {
            arr[i] = a[i] - 48;
        }
        long long int as = 0;
        int i;
        for (i = 0; i < a.size();)
        {
            while (as/b <=0 && i < a.size())
            {
                as = as*10 + arr[i];
                i++;
            }
            // printf("%lld\n",as);
            as = as%b;
            // printf("%lld %d\n",as,i);
            
            
        }
        // printf("%d\n", a.size());
        if(as == 0){
            printf("Case %d: divisible\n",tc);
        }
        else
        {
            printf("Case %d: not divisible\n",tc);
        }
        
        
    }
    
}