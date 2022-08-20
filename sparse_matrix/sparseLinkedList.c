#include <stdio.h>
#include <stdlib.h>
struct sparseLinkedList
{
    int row;
    int col;
    int value;
    struct sparseLinkedList *next;
};
void takeInput(int *matrix, int row, int col);
void createSparse(int *matrix, int row, int col, struct sparseLinkedList *head);
void main()
{
    int row, col;
    struct sparseLinkedList *head = NULL;
    int countZeros = 0;
    printf("Enter your matrix size\n");
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &col);
    int matrix[row][col];
    printf("Please input your data\n");
    takeInput((int *)&matrix, row, col);
    createSparse((int *)&matrix, row, col, head);
    printf("%d\n", head->value);
    printf("%d\n", head->row);
    printf("%d\n", head->col);
    printf("%d\n", head->next);
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

void createSparse(int *matrix, int row, int col, struct sparseLinkedList *head)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val = i * (col - 1);
            if (*(matrix + (i + j) + val) != 0)
            {
                struct sparseLinkedList *new = (struct sparseLinkedList *)malloc(sizeof(struct sparseLinkedList));
                struct sparseLinkedList *temp;
                if (head != NULL)
                {
                    temp = head;
                }
                else
                {
                    temp = (struct sparseLinkedList *)malloc(sizeof(struct sparseLinkedList));
                }
                new->col = j;
                new->row = i;
                new->value = *(matrix + (i + j) + val);
                new->next = NULL;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp = new;
            }
        }
    }
}