#include <stdio.h>
void takeInput(int *matrix, int row, int col);
int countZeros(int *matrix, int row, int col);
void sparseMatrix(int *matrix, int row, int col, int *arr, int nonzeros);
void printSparseMatrix(int *sparseArr, int row, int col);

void main()
{
    int row, col;
    // int countZeros = 0;
    printf("Enter your matrix size\n");
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &col);
    int matrix[row][col];
    printf("Please input your data\n");
    takeInput((int *)&matrix, row, col);
    int count = countZeros((int *)&matrix, row, col);
    // printf("%d", count);
    int sparse[3][count];
    sparseMatrix((int *)&matrix, row, col, (int *)&sparse, count);
    printSparseMatrix((int *)&sparse, 3, count);
}

// =================functions defination====================//
void takeInput(int *matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // you can see resource
            int val = i * (col - 1);
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", (matrix + (i + j) + val));
        }
    }
}
// count zerors
int countZeros(int *matrix, int row, int col)
{
    int count = 0;
    for (int i = 0; i < row * col; i++)
    {
        if (*(matrix + i) != 0)
        {
            count++;
        }
    }
    return count;
}
// representing sparseMatrix
void sparseMatrix(int *matrix, int row, int col, int *arr, int nonZeros)
{
    int first = 0, sec = nonZeros, third = nonZeros * 2;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val = i * (col - 1);
            if (*(matrix + (i + j) + val) != 0)
            {
                *(arr + first) = i;
                *(arr + sec) = j;
                *(arr + third) = (*(matrix + (i + j) + val));
                first++;
                sec++;
                third++;
            }
        }
    }
}

// print sparseMatrix array
void printSparseMatrix(int *sparseArr, int row, int col)
{
    printf("::sparse matrix representation::\n");
    for (int i = 0; i < row; i++)
    {
        i == 0 ? printf("Row=>   ", 2) : i == 1 ? printf("Col=>   ", 2)
                                                : printf("Value=> ");
        for (int j = 0; j < col; j++)
        {
            int val = i * (col - 1);
            printf("%d ", (*(sparseArr + (i + j) + val)));
        }
        printf("\n");
    }
}