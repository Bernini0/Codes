#include <bits/stdc++.h>
using namespace std;

int main()
{
    char genome1[100001];
    char genome2[100001];
    scanf("%s",genome1);
    scanf("%s",genome2);

    int deviation = 0;
    int temp,a,b;
    if(strlen(genome2)!=strlen(genome1)){
        printf("NO\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < strlen(genome2); i++)
        {
            if(genome1[i]!=genome2[i]){
                deviation++;
                b = a;
                a = i;

            }
        }
        
    }
    if(deviation==2 && genome1[a]==genome2[b] && genome1[b]==genome2[a]){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}