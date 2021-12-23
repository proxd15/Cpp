#include <stdio.h>

void main()
{
    int arr[3][4] = {{1, 2, 3, 2}, {3, 5, 3, 2}, {1, 2, 3, 4}};
    int arr2[3][4] = {{1, 2, 3, 2}, {3, 5, 3, 2}, {1, 2, 3, 4}};
    int sum[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
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
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
        
    }for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
}
