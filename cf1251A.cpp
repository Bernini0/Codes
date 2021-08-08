#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        int arr[30] = {0};

        cin >> str;
        int i = 0;

        while (i < str.size())
        {
            char ch = str[i];

            int j = i, cnt = 0;

            while(j < str.size()){
                if(str[j] != ch) break;
                cnt++;
                j++;
            }
            if(cnt % 2 == 1) arr[ch-'a'] = 1;
            i = j;
        }

        for(int i = 0; i < 26; i++){
            if(arr[i]){
                char x = i + 'a';
                cout << x;
            }
        }
        cout << endl;
    }
    
}