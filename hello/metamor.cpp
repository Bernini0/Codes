#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n+1];
    int ansv[n-k+1];
    memset(ansv,0,sizeof(ansv));

    int m = 0, o;
    int min = 1000000000;
    int c = 0, d;
    arr[0] = c;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &d);
        c +=d;
        arr[i] = c;

    }
    for (int i = k; i <= n; i++)
    {
        ansv[m] = arr[i]- arr[i-k];
        if(ansv[m]< min){
            min = ansv[m];
            o = m;
        }
        m++;
    }

    printf("%d\n", o+1);
}