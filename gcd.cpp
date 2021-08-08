#include <stdlib.h>
#include <stdio.h>
// using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;

    return gcd(b%a, a);
}



int main(){
    int n;
    scanf("%d", &n);

    int arr[n+7];

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 1; i < n; i++){
        int a = arr[i-1];
        int b = arr[i];

        if(a > b) swap(a, b);

        // cout << a << " " << b << " ";

        while(a > 0) {
            int temp = b - a;
            b = max(temp, a);
            a = min(temp, a);
        }
        arr[i] = b;
        // cout << "gc " << b << endl;
    }

    printf("%d\n", arr[n-1]);
    
}