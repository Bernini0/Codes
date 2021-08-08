#include <stdio.h>
int main()
{
    int fst,sst,ffst;
    double tn;
    scanf("%d %d %d", &fst, &sst, &ffst);
    tn = fst/ 4.0 + sst/4.0 +ffst/2.0;
    printf("%lf", tn);


    return 0;
}