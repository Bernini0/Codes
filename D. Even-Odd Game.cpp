#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        vector<ll>even;
        vector<ll>odd;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            if(arr[i]&1){
                odd.push_back(arr[i]);
            }
            else
            {
                even.push_back(arr[i]);
            }
            
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end(),greater<int>());
        ll ans_alice = 0, ans_bob = 0;
        int k = 0, l = 0;
        int m = 1;
        while (1)
        {
            if(k == odd.size() && l==even.size()){
                break;
            }
            if(m&1){
                if(k==odd.size()){
                    ans_alice += even[l];
                    l++;
                }
                else if(l==even.size()){
                    k++;
                }
                else if(k < odd.size() && l < even.size() && odd[k] < even[l]){
                    ans_alice+= even[l];
                    l++;
                }
                else
                {
                    k++;
                }
                m++;
            }
            else
            {
                if(k==odd.size()){
                    
                    l++;
                }
                else if(l==even.size()){
                    ans_bob += odd[k];
                    k++;
                }
                else if(k < odd.size() && l < even.size() && odd[k] < even[l]){
                    l++;
                }
                else
                {
                    ans_bob += odd[k];
                    k++;
                }
                m++;
            }
            

        }
        if(ans_alice==ans_bob){
            printf("Tie\n");
        }
        else if(ans_bob > ans_alice){
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
        
    }
    
}