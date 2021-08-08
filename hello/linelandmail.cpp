#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector <pair<int, int> > v;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a,b;
    for (int i = 0; i < n; i++)
    {
        
        if(i==(n-1)){
            a = abs(arr[n-1]-arr[0]);
        }
        else
        {
            a = abs(arr[n-1]-arr[i]);
            int c = abs(arr[0]-arr[i]);
            if(c>a)swap(a,c);
        }
        
        if(i==(n-1)){
            b = abs(arr[i]-arr[i-1]);
        }
        else if(i==0){
            b = arr[i+1]-arr[i];
        }
        else
        {
            b = abs(arr[i+1]-arr[i]);
            int c = abs(arr[i-1]-arr[i]);
            if(c<b)swap(b,c);
        }
        
        v.push_back(make_pair(a,b));
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d %d\n", v[i].second,v[i].first);
    }
    
}