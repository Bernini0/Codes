#include <stdio.h>
#include <string.h>

int isUnique(int year) {
    int cnt[10]; 
    memset(cnt, 0, sizeof(cnt));

    while(year > 0){
        int last = year%10;

        if(cnt[last] != 0) return 0;
        
        year /= 10;
        cnt[last]++;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = n+1; i <= 9000; i++ ){
        if(isUnique(i) == 1){
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}