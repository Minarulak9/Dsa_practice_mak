#include <stdio.h>
int findWay(int row, int col);
void main()
{
    int res = findWay(2,2);
    int res1 = findWay(2,3);
    printf("%d\n",res);
    printf("%d\n",res1);
}
int findWay(int row, int col)
{
    if (row == 1 || col == 1)
        return 1;
    return findWay(row, col - 1) + findWay(row - 1, col);
}