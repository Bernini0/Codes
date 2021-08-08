#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s;
        cin >> s;
        bool arr[4];
        memset(arr,false,sizeof(arr));
        int cntl =0, cntr = 0, cntu = 0,cntd = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='('){
                arr[0] = true;
                cntl++;
            }
            else if(s[i] == ')'){
                if(cntl !=0){
                arr[1] = true;
                cntr++;
                }
            }
            else if(s[i]=='['){
                arr[2] = true;
                cntu++;
            }
            else if(s[i]==']'){
                if(cntu!=0){
                arr[3]  =true;
                cntd++;
                }
            }
            if(arr[0] && arr[1]){
                cnt++;
                cntl--;cntr--;
                if(cntl==0){
                    arr[0] = false;
                }
                if(cntr==0){
                    arr[1] = false;
                }

            }
            if(arr[2]&&arr[3]){
                cnt++;
                cntu--;
                cntd--;
                if(cntu==0){
                    arr[2] = false;
                }
                if(cntd==0){
                    arr[3] = false;
                }
            }
        }
        printf("%d\n",cnt);
    }
    
}