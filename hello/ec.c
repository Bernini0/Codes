#include <stdio.h>

int main()
{
    int arr[100];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int cnt = 0;
        scanf("%d", &n);
        for (int i = 0; i < 26000; i++)
        {
            if (n == arr[i])
            {
                cnt++;
                printf("%d\n", cnt);
                break;
            }
            if (n < arr[1])
            {
                printf("%d\n", cnt);
                break;
            }

            if (n < arr[i])
            {
                n = n - arr[i - 1];
                cnt++;
                i = 0;
            }
        }
    }
}
