#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a = 0, b = 0, c = 0;
    bool no = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==25)a++;
        else if(arr[i]==50){
            b++;
            a--;
            if(a < 0){
                no = true;
                break;
            }
        }
        else
        {
            c++;
            if(b > 0){
                b--;
                a--;
            }
            else
            {
                a -= 3;
            }
            if(a < 0){
                no = true;
                break;
            }
        }
        
    }
    if(no){
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    
    
}