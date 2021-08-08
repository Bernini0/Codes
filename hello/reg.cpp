#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;

    cin >> str1 >> str2;

    string str3(str2.begin(), str2.begin() + str2.length()-1);

    if(str1 == str3)
        cout << "Yes\n";
    else cout << "No\n";
}