#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        vector <string>v(1);
        cin >> v[0];
        getchar();
        int a = 1;
        int cnt = 0;
        while (a>0)
        {
            int temp = cnt;
            
            for (int i = 1; i < v[0].size(); i++)
            {
                if(v[0][i] != v[0][i-1]){
                    v[0].erase(v[0].begin()+i);
                    v[0].erase(v[0].begin()+i-1);
                    cnt++;
                    break;
                }
            }
            if(temp == cnt){
                a = 0;
            }
            
        }
        if(cnt %2  ==1){
            printf("DA\n");
        }
        else
        {
            printf("NET\n");
        }
        
        
    }
    
}