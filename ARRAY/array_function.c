#include <stdio.h>

void data(int *row, int *column)
{
    printf("Enter number of rows: ");
    scanf("%d", row);

    printf("Enter number of columns: ");
    scanf("%d", column);
}

void array(int row, int column)
{
    int arr[50][50];

    // Input
    printf("\nEnter the elements:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Output
    printf("\nThe array is:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, column;

    data(&row, &column);
    array(row, column);

    return 0;
}
