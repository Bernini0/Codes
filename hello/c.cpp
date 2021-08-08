#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[100000];
    for (int i = 0; i < 100000; i++)
    {
        arr[i] = i;
    }
    
    for (int i = 2; i < 100000; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j < 100000; j = j + i)
            {
                arr[j] = 0;
            }
        }
    }
    for (int i = 2; i < 100000; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d,", arr[i]);
        }
    }
}