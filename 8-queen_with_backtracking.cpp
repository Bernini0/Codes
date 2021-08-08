#include <bits/stdc++.h>
using namespace std;
int row[8];
vector<int>v[100000];
int j = 0;
int x, y,lines = 0;;
bool check(int r,int c){
    for (int prev = 0; prev < c; prev++)
    {
        if(row[prev]== r || abs(row[prev]-r)==abs(prev-c)){
            return false;
        }
    }
    return true;
}
void backtrack(int c)
{
    if(c==8){
        if(row[y]==x){
            printf("%2d      %d",++lines,row[0]+1);
        for (int i = 1; i < 8; i++)
        {
            printf(" %d",row[i]+1);
        }
        printf("\n");
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if(check(i,c)){
            row[c] = i;
            backtrack(c+1);
        }
    }
    
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--){
        lines = 0;
    scanf("%d %d", &x, &y);
    x--;
    y--;
    printf("SOLN       COLUMN\n");
    printf(" #      1 2 3 4 5 6 7 8\n\n");
    backtrack(0);
    if(tc)printf("\n");
    }
    
    
    
}