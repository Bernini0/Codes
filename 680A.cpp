#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n],arr1[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        sort(arr,arr+n);
        sort(arr1,arr1+n);
        bool no = false;
        for(int i = 0; i < n; i++){
            if(arr[i]+arr1[n-1-i] > x){
                no = true;
                break;
            }
        }
        if(!no){
            cout << "YES\n"; 
        }
        else
        {
            cout << "NO\n";
        }
        
    }
}