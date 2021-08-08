#include <stdio.h>

int main()
{
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n, m;
    scanf("%d %d",&n, &m);
    for (int i = 0; i < 15; i++)
    {
        if (arr[i]==n && arr[i+1]==m)
        {
            printf("YES\n");
            return 0;
        }
        
    }
    printf("NO\n");

    return 0;
    
    
    
}