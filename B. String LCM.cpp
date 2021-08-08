#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string s3,s4,s5;
        if(s1.size() >= s2.size()){
            s3 = s1;
            s4 = s2;
            s5 = s3;
        }
        else
        {
            s3 = s2;
            s4 = s1;
            s5 = s3;
        }
        int j = 0;
        bool no = true;
        // cout << s3 << s4 <<endl;
        // s3 = s3+s5;
        // cout << "lsfsf"<<s3 <<endl;
        while (1)
        {
            // int j = 0;
            for (int i = 0; i < s4.size(); i++)
            {
                if(j==s3.size() && i < s4.size()){
                    s3 = s3+s5;
                    // cout << s3 <<endl;
                }
                if(s3[j]!=s4[i]){
                    no = false;
                    break;
                }
                else
                {
                    j++;
                }
                
            }
            if(j==s3.size()){
                break;
            }
            if(!no){
                break;
            }
        }
        if(!no){
            printf("-1\n");
        }
        else
        {
            cout << s3 <<endl;
        }
        
    }
    
}