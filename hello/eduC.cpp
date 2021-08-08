#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        string s;
        cin>> s;
        getchar();
        int plus = -1;
        int cur = 0;
        long long int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            
            if(s[i]=='-'){
                if(plus <= 0){
                    result++;
                    // cur++;
                    result += i+1;
                    plus--;
                 
                    // printf("1 %lld\n",result);
                }
                else
                {
                    result += 1;
                    plus--;
                    cur++;
                    // printf("2 %lld\n",result);
                }
                
            }
            else
            {
                if(plus < 0){
                    plus = 0;
                    plus++;
                    result++;
                    cur = 0;
                    // if(i!= 0){
                    //     result += i;
                    // }
                    // printf("3 %lld\n",result);
                }
                else
                {
                    plus++;
                    result++;
                    cur = 0;
                    // printf("4 %lld\n",result);
                }
                
            }
            
        }
        // if(s[s.size()-1]=='-' && plus < 0)result +=s.size();
        printf("%lld\n",result);
        
    }
    
}