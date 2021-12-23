#include <stdio.h>

void main()
{
    int arr[3][4] = {{1, 2, 3, 2}, {3, 5, 3, 2}, {1, 2, 3, 4}};
    int arr2[4][4] = {{1, 2, 3, 2}, {3, 5, 3, 2}, {1, 2, 3, 4},{1,2,3,4}};
    int mul[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {    
            //mul[i][j]=0;
            for(int k=0;k<4;k++){
            mul[i][j] += arr[i][k] * arr2[k][j];
            }
        }
        
    }for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
}
