#include <stdio.h>
int main()
{
    int arr[46]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170};
    
    int n;
    scanf("%d",&n);
    for (int i = 0; i < 46 && n <10000000000; i++)
    {
        if (n == 0)
        {
            printf("0 0 0");
            return 0;
        }
        if (n==1)
        {
            printf("1 0 0");
            return 0;
        }
        if (n == 2)
        {
            printf("1 1 0");
            return 0;
        }
        
        
        
        if(n==arr[i] && n > 2)
        {
            printf("%d %d %d",arr[i-2],arr[i-2],arr[i-3]);
            return 0;
        }
    }
    printf("\n");
    
}