#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
llu bigmod(llu a, llu b){
    if(b==0)return 1;
    else if(b%2==0){
        llu ret = bigmod(a,b/2);
        return ret * ret;
    }
    else
    {
        return a*bigmod(a,b-1);
    }
    
}
char arr[4];
void fill(int n)
{
    for (int i = 0; i < 4; i++)
    {
        arr[i] = '0';
    }
    int i = 0;
    while (n >= 1)
    {
        arr[i] = (n%10)+48;
        n /= 10;
        i++;
    }
    
    
}
int get(){
    // sort(arr,arr+4);
    int n = 0;
    for (int i = 0; i < 4; i++)
    {
        n += ((arr[i]-48) * bigmod(10,i));
    }
    
    return n;
}
int get2()
{
    reverse(arr,arr+4);
    int n = 0;
    for (int i = 0; i < 4; i++)
    {
        n += ((arr[i]-48) * bigmod(10,i));
    }
    return n;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        fill(n);
        for (int i = 0; i < m; i++)
        {
            sort(arr,arr+4);
            // printf("%c\n",arr[3]);
            int k = get();
            int l = get2();
            // printf("%d %d\n",k,l);
            n = k-l;
            fill(n);
            if(n==6174){
                break;
            }
        }
        printf("%d\n",n);
    }
    
}