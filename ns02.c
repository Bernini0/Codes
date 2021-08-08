#include <stdio.h>
struct info
{
    int roll;
    int age;
    char address[100];
    char name[50];
}info;

int main()
{
    struct info arr[1000];
    printf("Number of Students: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %s", &arr[i].roll, arr[i].name, &arr[i].age,arr[i].address);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i].age > 24){
            printf("%s\n",arr[i].name);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i].roll %2==0){
            printf("%s\n",arr[i].name);
        }
    }
    
}