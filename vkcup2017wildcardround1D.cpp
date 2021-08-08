#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    int arr[n];
    l--;
    r--;
    vector<int>v1,v2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(i >= l && i <= r){
            v1.push_back(arr[i]);
        }
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
        if(i >= l && i <= r){
            v2.push_back(arr2[i]);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    bool no = false;
    for (int i = 0; i < v1.size(); i++)
    {
        if(v1[i]!=v2[i]){
            no = true;
            break;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if(arr[i] != arr2[i]){
            no = true;
            break;
        }
    }
    for (int i = r+1; i < n; i++)
    {
        if(arr[i]!=arr2[i]){
            no = true;
            break;
        }
    }
    if(no){
        printf("LIE\n");
    }
    else printf("TRUTH\n");
}