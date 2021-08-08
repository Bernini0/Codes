#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int n, k;
    cin >> n >> k;

    ll arr[n+1];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll penalty = 0;
    ll tm = 0;
    multiset<ll> st;

    for(int i = 0; i < n; i++){
        if(i < k){
            st.insert(arr[i]);
            continue;
        }

        set<ll>::iterator it = st.begin();
        tm += (*it);
        penalty += tm;
        st.erase(it);
        //cout << "solved " << tm << endl;
        st.insert(arr[i]);
    }

    while (st.size())
    {
        set<ll>::iterator it = st.begin();
        tm += (*it);
        penalty += tm;
        st.erase(it);
        //cout << "solved " << tm << endl;
    }
    cout << penalty << endl;

    return 0;
}