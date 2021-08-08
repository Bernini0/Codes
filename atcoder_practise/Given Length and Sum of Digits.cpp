#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int k = n;
    k--;
    if(n==0 && m != 1){
        printf("-1 -1\n");
        return 0;
    }
    if(m==1 && n==0){
        printf("0 0\n");
        return 0;
    }
    char arr[m];
    if(n > m*9){
        printf("-1 -1\n");
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        arr[i] = '0';
    }
    for (int i = 0; i <m && n > 0; i++)
    {
        int c = min(n,9);
        // printf("%d\n",c);
        n = n-c;
        arr[i] = c+48;
    }
    string s1,s2;
    for (int i = 0; i < m; i++)
    {
        s1.push_back(arr[i]);
    }
    // printf(" ");
    s2 = s1;
    sort(s2.begin(),s2.end());
    
    if(s2[0]=='0'){
        for (int i = 1; i < m; i++)
        {
            if(s2[i]!='0'){
                int c  =s2[i]-1;
                s2[i] = c;
                break;
            }
        }
        s2[0]= '1';
    }
    cout << s2 <<" " << s1 <<endl;
}