#include <bits/stdc++.h>
using namespace std;
int arr[] = {4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 60, 62, 63};
int brr[65536];
vector<unsigned long long int> ans;
void seive()
{
    memset(brr, 0, sizeof(brr));
    for (int i = 2; i * i < 65536; i++)
    {
        if (brr[i] == 0)
        {
            for (int j = i * i; j < 65536; j *= i)
            {
                brr[j] = 1;
            }
        }
    }
}
unsigned long long int bigmod(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        unsigned long long int c = bigmod(a, b / 2);
        return c * c;
    }
    else
        return a * bigmod(a, b - 1);
}
void precal()
{
    unsigned long long int d = 1ULL << 63;
    d--;
    d *= 2;
    d++;
    for (int i = 2; i < 65536; i++)
    {
        if (brr[i] == 0)
        {
            int c = log10(d) / log10(i);
            for (int j = 0; j < 44 && arr[j] <= c; j++)
            {
                ans.push_back(bigmod(i, arr[j]));
            }
        }
    }
}
int main()
{
    seive();
    ans.push_back(1);
    precal();
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        printf("%llu\n",ans[i]);
    }
    
}