#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char str[n+1];
    int ans=0;
    scanf("%s",str);
    for (int i = 0; i < n; i++)
    {
        if (str[i]==str[i+1])
        {
            ans++;
        }
        
    }
    printf("%d",ans);


}