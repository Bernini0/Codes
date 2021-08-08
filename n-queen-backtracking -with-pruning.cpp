#include <bits/stdc++.h>
using namespace std;
int n;
int row[30],r2[30],r3[30];
int cnt = 0;
void backtrack(int pos){
    if(pos==n){
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(row[i] || r2[i+pos] || r3[i-pos+n-1])continue;
        row[i] = r2[i+pos] = r3[i-pos+n-1] = 1;
        backtrack(pos+1);
        row[i] = r2[i+pos] = r3[i-pos+n-1] = 0;
    }
    
}
int main()
{
    scanf("%d", &n);
    // memset(row,0,sizeof(row));
    // memset(r2,0,sizeof(r2));
    // memset(r3,0,sizeof(r3));
    backtrack(0);
    printf("%d\n",cnt);
}