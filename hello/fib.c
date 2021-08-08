#include <stdio.h>
#include <string.h>
int f[26000+7];

int pyramib(int h){
    if(f[h] != -1) return f[h];

    if (h==0) return 0;
    if (h==1) return 2;
    
    f[h] = pyramib(h-1)+(3*h)-1;
    
    return f[h]; 
}

int main()
{
    memset(f, -1, sizeof(f));
    f[0] = 0;
    f[1] = 2;

    for(int i = 2; i <= 26000; i++){
        pyramib(i);
    }

    int t; scanf("%d", &t);

    int n;
    while(t--){
        scanf("%d", &n);

        int cnt = 0;
        for (int i = 0; i < 26000; i++)
        {
            if (n == f[i])
            {
                cnt++;
                printf("%d\n", cnt);
                break;
            }
            if (n < f[1])
            {
                printf("%d\n", cnt);
                break;
            }

            if (n < f[i])
            {
                n = n - f[i - 1];
                cnt++;
                i = 0;
            }
        }

    }        
}