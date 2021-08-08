#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s[1000000+1];
    int r = 0;
    char p;
    while (scanf("%c", &p)==1 && p!='\n')
    {
        s[r] = p-48;
        r++;
    }
    r++;
    int a, b;
    scanf("%d %d", &a, &b);
    int c = log10(a) + 1;
    int d = log10(b) + 1;
    int e = 0;
    for (int i = 0; i < r-d; i++)
    {
        e += s[i];
        e = (e % a) * 10;
        // cout << e << endl;
        bool yes = false;
        int k;
        if (e == 0)
        {
            k = i;
            while(s[k+1]=='0')
            {
                k++;
            }
            if(k==r-1){
                break;
            }
            // printf("%d\n",k);
            int f = 0;
            for (int j = k + 1; j < r; j++)
            {
                f += s[j] - 48;
                f = (f % b) * 10;
                // printf("%d\n",f);
            }
            // printf("%d\n",f);
            if(f==0){
                yes = true;
            }
        }
        if (yes)
        {
            printf("YES\n");
            for (int i = 0; i <= k; i++)
            {
                printf("%d",s[i]);
            }
            printf("\n");
            for (int i = k + 1; i < r; i++)
            {
                printf("%d",s[i]);
            }
            printf("\n");
            return 0;
        }
    }
    cout << "NO" << endl;
}