#include <bits/stdc++.h>>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int r = n;
    string s;
   
    // cout << s <<endl;
    for (int i = 0; i < k; i++)
    {
        s+=(char)'a'+i;
        for(int j = i+1; j < k; j++){
            s+= (char)'a'+i;
            s+= (char)'a'+j;
            
        }
    }
    // cout << s.size() <<endl;
    while (s.size() < n)
    {
        // n-=s.size();
        s+=s;
    }
    s.resize(n);
    cout << s <<endl;
}