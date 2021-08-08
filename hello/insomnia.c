#include <stdio.h>

int main()
{
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    int cnt=0;
    if (k==1 || l==1 || m  ==1 ||n ==1 )
    {
        printf("%d",d);
        return 0;
    }
    for (int i = 1; i <= d; i++)
    {
        if (i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
        {
            cnt++;
        }
    }
    printf("%d\n",(d-cnt));

    return 0;
}