#include <stdio.h>
int findWay(int row, int col);
void main()
{
    int res = findWay(3,3);
    int res1 = findWay(4,3);
    printf("%d\n",res);
    printf("%d\n",res1);
}
int findWay(int row, int col)
{
    int arr[row][col];

    // filling 1 in fist row and first column
    for (int i = 0; i < row; i++)
        arr[0][i] = 1;
    for (int i = 0; i < col; i++)
        arr[i][0] = 1;

    // calculating ways
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; // if you need diagnal path then you can add arr[i-1][j-1]
        }
    }
    return arr[row-1][col-1];
}