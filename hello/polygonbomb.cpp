#include <bits/stdc++.h>
using namespace std;
int n;

bool inside(int row, int col){
    if(row >= n) return false;
    if(col >= n) return false;

    return true;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d",&n);
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //for (int i = 0; i < n; i++)
        //{
          //  cout<< arr[i] <<endl; 
        //}
        
        int d = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                
                
                if(arr[i][j]=='1' && arr[i+1][j]=='0' && arr[i][j+1]=='0'){
                    d=-2;
                }
            }
            
        }
        if(d==-2){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
        
        
    }
}