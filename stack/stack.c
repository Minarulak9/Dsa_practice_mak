#include <stdio.h>
#include <stdlib.h>
void printOptions();
int confirmation();
void printStack(int arr[], int size);
int push(int arr[], int pos);
void pop();
void length();
void isFull();
void main()
{
    int confirm = 0, opt;
    int stack[100];
    int pos = -1;
    do
    {
        printOptions();
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printStack(stack, pos);
            break;
        case 2:
            pos = push(stack, pos);
            break;
        case 3:
            pop();
            break;
        case 4:
            length();
            break;
        case 5:
            isFull();
            break;
        case 0:
            confirm = confirmation();
        }

    } while (confirm == 0);
    printf("Exiting......");
}

void printOptions()
{
    system("cls");
    printf("1. Show stack\n");
    printf("2. push\n");
    printf("3. pop\n");
    printf("4. length\n");
    printf("5. isFull\n");
    printf("Choose any option and press 0 to exit: ");
}
int confirmation()
{
    int a;
    printf("are you sure to exit 1/0 \n=> ");
    scanf("%d", &a);
    return a;
}
void printStack(int arr[], int size)
{
    system("cls");
    int a;
    system("cls");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
    if (size < 0)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("\nstack is sucessfully printed\n");
    }
    printf("back to main menu press any number\n=> ");
    scanf("%d", &a);
}
int push(int arr[], int pos)
{
    int choice = 0;
    do
    {
        int a;
        system("cls");
        printf("Press any number to push: ");
        scanf("%d", &a);
        arr[++pos] = a;
        printf("pushed sucessfull.\n");
        printf("press 1 to back and 0 to add another number: ");
        scanf("%d", &choice);
    } while (choice == 0);
    return pos;
}
void pop()
{
    int a;
    system("cls");
    printf("implimenting......\n");
    printf("Press 0 to back: ");
    scanf("%d", &a);
}
void length()
{
    int a;
    system("cls");
    printf("implimenting......\n");
    printf("Press 0 to back: ");
    scanf("%d", &a);
}
void isFull()
{
    int a;
    system("cls");
    printf("implimenting......\n");
    printf("Press 0 to back: ");
    scanf("%d", &a);
}