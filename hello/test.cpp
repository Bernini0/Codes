#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        string str1="";
        char str[n+1];
        for (int i = 0; i < n - 2; i++)
        {
            str[i] = 'a';
        }
        str[n - 2] = 'b';
        str[n - 1] = 'b';
        str[n] = '\0';
        int size =sizeof(str)/sizeof(char); 
        for (int i = 0; i < size; i++)
        {
            str1 = str1+ str[i];
        }
        std::cout <<""<< str1 << endl;
        
        int i = 1;
        while (next_permutation(str1.begin(), str1.end()))
        {
            
            i++;
        }
        std::cout <<""<< i << endl;
    }
}