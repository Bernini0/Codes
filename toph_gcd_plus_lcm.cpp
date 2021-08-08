#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if(a > b) swap(a, b);

        ll gc = __gcd(a, b);
        ll lc = (a / gc) * b;

        if(gc+lc == a + b) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}