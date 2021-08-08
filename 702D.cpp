#include <bits/stdc++.h>
using namespace std;
int arr[101];
int find_max(int l, int r)
{
    int max = -1;
    int a;
    for (int i = l; i <= r; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            a = i;
        }
    }
    return a;
}
int arr2[101];
void build(int l, int r){
    int b = find_max(l,r);


}
int main()
{
    int t;
    scanf("%d", &t);
}