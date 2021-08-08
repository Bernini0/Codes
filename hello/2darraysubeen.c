#include <stdio.h>

int main()
{
    int arr[5][5] ={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int sum = 0;
    int row;
    int col;
    /*for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }*/
    int arr2[5][5];
    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr2[i][j]=arr[j][i];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
     
    return 0;

}