#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void wellcome();
void loading();
void end();
int countNode(struct Node *head);
void msg();
void printList(struct Node *head);
void addNewNode();
void removeNode();
void addAtEnd(struct Node **head);
void addAtMiddle(struct Node **head);
void addAtbeginning(struct Node **head);
void removeFromEnd(struct Node **head);
void removeFromMiddle(struct Node **head);
void removeFrombeginning(struct Node **head);
int main()
{
    int option = 9;
    int count;
    do
    {
        switch (option)
        {
        case 9:
            wellcome();
            printf("==> ");
            scanf("%d", &option);
            break;
        case 1:
            printList(head);
            msg();
            printf("==> ");
            scanf("%d", &option);
            break;
        case 2:
            addNewNode();
            wellcome();
            printf("==> ");
            scanf("%d", &option);
            break;
        case 3:
            removeNode();
            wellcome();
            printf("==> ");
            scanf("%d", &option);
            break;
        case 4:
            removeNode();
            wellcome();
            printf("==> ");
            scanf("%d", &option);
            break;
        case 5:
            count = countNode(head);
            printf("list contain %d nodes\n", count);
            loading();
            wellcome();
            printf("==> ");
            scanf("%d", &option);
            break;
        default:
            printf("Please chose right option ");
            loading();
            option = 9;
        }
        if (option == 0)
            end();
    } while (option != 0);

    return 0;
}
void wellcome()
{
    system("cls");
    printf("==========! :) Wellcome to linkedList (: !=========\n");
    Sleep(50);
    printf("<<=Choose your option=>>\n");
    Sleep(50);
    printf("1. Show linkedList\n");
    Sleep(50);
    printf("2. Add new node\n");
    Sleep(50);
    printf("3. Remove existing node\n");
    Sleep(50);
    printf("4. Change node value\n");
    Sleep(50);
    printf("5. Count list\n");
    Sleep(50);
    printf("0. Exit Application\n");
    Sleep(50);
    printf("9. Restart Application\n");
    Sleep(50);
}
void loading()
{
    Sleep(250);
    printf("\\");
    Sleep(250);
    printf("\b/");
    Sleep(250);
    printf("\b\\");
    Sleep(250);
    printf("\b/");
    Sleep(250);
    printf("\b\\");
    Sleep(250);
    printf("\b/");
    Sleep(250);
    printf("\b\\");
    Sleep(250);
    printf("\b/");
    Sleep(250);
    printf("\b\\");
    Sleep(250);
    printf("\b/");
    Sleep(250);
    printf("\b\\");
    Sleep(250);
}
void end()
{
    printf("Happy codding :)\n");
    printf("Exiting");
    Sleep(100);
    printf(".");
    Sleep(100);
    printf(".");
    Sleep(100);
    printf(".");
    Sleep(100);
    printf(".");
    Sleep(100);
    printf(".");
    Sleep(100);
}
void msg()
{
    printf("9. Back to menu\n");
    Sleep(50);
    printf("0. Exit\n");
    Sleep(50);
}

int countNode(struct Node *head)
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
    }
    else
    {
        struct Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            printf("[%d]->", temp->data);
            if (count < 6)
                Sleep(50);
            temp = temp->next;
            count++;
        }
        printf("NULL\n");
    }
}

// node manuplation
void addNewNode()
{
    int opt;
    printf("Where you want to add new Node? \n");
    Sleep(50);
    printf("1. at beginning\n");
    Sleep(50);
    printf("2. at middle\n");
    Sleep(50);
    printf("3. at end\n");
    Sleep(50);
    printf("0. Cancel\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &opt);
    int check = 1, count = 0;
    switch (opt)
    {
    case 1:
        check = 1;
        count = 0;
        do
        {
            addAtbeginning(&head);
            printf("Press 1 to add more\n");
            Sleep(50);
            printf("Press 0 to back\n");
            Sleep(50);
            printf("==> ");
            scanf("%d", &check);
            count++;
        } while (check == 1);
        printf("%d Node successfully added at beginning\n", count);
        loading();
        break;
    case 2:
        check = 1;
        count = 0;
        do
        {
            addAtMiddle(&head);
            printf("Press 1 to add more\n");
            Sleep(50);
            printf("Press 0 to back\n");
            Sleep(50);
            printf("==> ");
            scanf("%d", &check);
            count++;
        } while (check == 1);
        printf("%d Node successfully added at your given position\n", count);
        loading();
        break;
    case 3:
        check = 1;
        count = 0;
        do
        {
            addAtEnd(&head);
            printf("Press 1 to add more\n");
            Sleep(50);
            printf("Press 0 to back\n");
            Sleep(50);
            printf("==> ");
            scanf("%d", &check);
            count++;
        } while (check == 1);
        printf("%d Node successfully added at the end of list\n", count);
        loading();
        break;
    case 0:
        printf("Operation canceled.\n");
        loading();
        break;
    }
}

void removeNode()
{
    int opt;
    printf("From where you want to delete Node? \n");
    Sleep(50);
    printf("1. Remove from first\n");
    Sleep(50);
    printf("2. Remove from middle\n");
    Sleep(50);
    printf("3. Remove from end\n");
    Sleep(50);
    printf("0. Cancel\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &opt);
    int check = 1, count = 0;
    switch (opt)
    {
    case 1:
        check = 1;
        count = 0;
        do
        {
            removeFrombeginning(&head);
            printf("Press 1 to remove more\n");
            Sleep(50);
            printf("Press 0 to back\n");
            Sleep(50);
            printf("==> ");
            scanf("%d", &check);
            count++;
        } while (check == 1);
        printf("%d Node successfully removed from beginning\n", count);
        loading();
        break;
    case 2:
        check = 1;
        count = 0;
        do
        {
            removeFromMiddle(&head);
            printf("Press 1 to remove more\n");
            Sleep(50);
            printf("Press 0 to back\n");
            Sleep(50);
            printf("==> ");
            scanf("%d", &check);
            count++;
        } while (check == 1);
        printf("%d Node successfully removed from your given position\n", count);
        loading();
        break;
    case 3:
        check = 1;
        count = 0;
        do
        {
            removeFromEnd(&head);
            if (head != NULL)
            {
                printf("Press 1 to remove more\n");
                Sleep(50);
                printf("Press 0 to back\n");
                Sleep(50);
                printf("==> ");
                scanf("%d", &check);
                count++;
            }
            else
            {
                check = 0;
            }
        } while (check == 1);
        printf("%d Node successfully removed form the end of list\n", count);
        loading();
        break;
    case 0:
        printf("Operation canceled.\n");
        loading();
        break;
    }
}
void addAtEnd(struct Node **head)
{
    int data;
    struct Node *temp = *head;
    printf("enter a number value\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &data);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void addAtMiddle(struct Node **head)
{
    int data, pos, count = 1;
    struct Node *temp = *head;
    printf("enter a number value\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &data);
    Sleep(50);
    printf("enter position of this node\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &pos);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL || pos == 1)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            if (pos - 1 == count)
            {
                break;
            }
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void addAtbeginning(struct Node **head)
{
    int data;
    printf("enter a number value\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &data);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head != NULL)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        *head = newNode;
    }
}

void removeFromEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is allrady empty\n");
    }
    else
    {
        struct Node *temp = *head;
        struct Node *prev = temp;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        printf("removed %d from the list\n", temp->data);
    }
}
void removeFromMiddle(struct Node **head)
{
    int pos, count = 1;
    int nodeCount = countNode(*head);
    struct Node *temp = *head;
    printf("enter position \n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &pos);
    if (*head == NULL)
    {
        printf("List is allrady empty\n");
    }
    else if (nodeCount < pos)
    {
        printf("List contains maximum %d nodes\n", nodeCount);
    }
    else if (pos == 1)
    {
        *head = temp->next;
        printf("removed %d from the list\n", temp->data);
    }
    else
    {
        while (temp != NULL)
        {
            if (pos - 1 == count)
            {
                break;
            }
            temp = temp->next;
            count++;
        }
        printf("removed %d from the list\n", temp->next->data);
        temp->next = temp->next->next;
    }
}
void removeFrombeginning(struct Node **head)
{
    
}