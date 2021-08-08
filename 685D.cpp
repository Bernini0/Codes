#include <bits/stdc++.h>
using namespace std;
double pi = acos(0.0);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int d, k;
        scanf("%d %d", &d, &k);
        double r = (double)d/(double)k;
        int j = (int)r;
        double area = r*r;
        area /= 4.0;
        area += 1;
        area -= (2*j);
        long long int a =(int)area +(4*j);
        if(a%2==0){
            printf("Utkarsh\n");
        }
        else{
            printf("Ashish\n");
        }
    }
    
}