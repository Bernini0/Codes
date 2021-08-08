#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,d,m,s;
    scanf("%d %d %d %d", &p, &d, &m, &s);
    int cumu = p;
    if(cumu > s){
        printf("0\n");
        return 0;
    }
    int cnt = 1;
    for (int i = p; i >=m && cumu <= s;)
    {
        if(i-d >= m){
            i = i-d;
            cumu += i;
            if(cumu > s){
                break;
            }
            else{
            cnt++;
            }
        }
        else
        {
            break;
        }
        
    }
    if(cumu < s){
        s = s-cumu;
        cnt += (s/m);
    }
    printf("%d\n",cnt);
}