#include <stdio.h>

void test_function(int arr[]){
    arr[0] = 100;
    return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d", arr[0]);
    test_function(arr);
    printf("%d", arr[0]);

    return 0;

}