#include <bits/stdc++.h>
using namespace std;

int n, l[100005], r[100005];
bool check(int i, int k){
    if (r[i] - l[i] + 1 < k) return false;
    if (i + k - 1 > n) return false;
    int ll = max(l[i], l[i + k - 1]);
    return r[i] - ll + 1 >= k && r[i + k - 1] - ll + 1 >= k;
}
int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d%d", &l[i], &r[i]);
    int k = 1;
    for (int i = 1; i <= n; ++i){
        while (check(i, k + 1)) ++k;
    }
    printf("%d\n", k);
    return 0;
}