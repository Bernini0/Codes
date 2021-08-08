#include<bits/stdc++.h>
using namespace std;
string str;
int cnt[30], occ[30];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        cin >> str;
        int l = str.size();
        for(int i = 0; i < 26; i++){
            cnt[i] == 0;
            occ[i] == 0;
        }
        for(int i = 0; i < l; i++){
            cnt[str[i]-'a']++;
            if(cnt[str[i]-'a'] == 1){
                occ[str[i]-'a'] = i+1;
            }
        }
        char ch1 = '%', ch2 = '%';
        int pos = 10000000;
        for(int i = 0; i < 26; i++){
            if(occ[i] == 0) continue;
            pos = 10000000;
            for(int j = i+1; j < 26; j++){
                if(occ[j] == 0) continue;
                if(occ[j] < occ[i]){
                    if(occ[j] < pos){
                        pos = occ[j];
                        ch1 = 'a'+i;
                        ch2 = 'a'+j;
                    }
                }
            }
            if(ch1 != '%' && ch2 != '%'){
                break;
            }
        }
        for(int i = 0; i < l; i++){
            if(str[i] == ch1) str[i] = ch2;
            else if(str[i] == ch2) str[i] = ch1;
        }
        cout << str << "\n";
        for(int i = 0; i < l; i++){
            cnt[str[i]-'a'] = 0;
            occ[str[i]-'a'] = 0;
        }
    }
    return 0;
}