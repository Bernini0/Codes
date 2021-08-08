#include <stdio.h>

double pi = 3.14;

void my_function(){
    pi = 3.1415;
}

int main()
{
    printf("%lf\n", pi);
    my_function();
    printf("%lf\n", pi);

    return 0;
}