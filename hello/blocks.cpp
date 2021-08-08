#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    vector <int > v;
    int cnt = 0;
    int black = 0, white = 0;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
        if(arr[i]=='W')white++;
        else black++;
    }
    if(white%2==1 && black %2==1){
        printf("-1\n");
        return 0;
    }
    else if(black==0 || white == 0){
        printf("0\n");
        return 0;
    }
    
    else
    {
        for (int i = 1; i < n; i++)
        {
            if(arr[i-1]=='W' && arr[i]=='W'){
                arr[i-1]= 'B';
                arr[i] = 'B';
                v.push_back(i);
                cnt++;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if(arr[i-1]=='W' && arr[i]=='B'){
                arr[i-1]='B';
                arr[i] = 'W';
                v.push_back(i);
                cnt++;
            }
            else if(arr[i-1]=='W' && arr[i]=='W'){
                arr[i-1]='B';
                arr[i] = 'B';
                v.push_back(i);
                cnt++;
            }
            if(white%2==1){
                for (int i = 1; i < n; i++)
                {
                    if(arr[i-1]=='B' && arr[i]=='B'){
                        arr[i-1]='W';
                        arr[i] = 'W';
                        cnt++;
                        v.push_back(i);
                    }
                }
                
            }
        }
        printf("%d\n",cnt);
        for (int i = 0; i < v.size(); i++)
        {
            printf("%d ", v[i]);
        }
        
        
        
        
    }
    
    
}