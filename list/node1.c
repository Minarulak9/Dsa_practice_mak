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
void changeNode();
void addAtEnd(struct Node **head);
void addAtMiddle(struct Node **head);
void addAtbeginning(struct Node **head);
int removeFromEnd(struct Node **head, int *count);
int removeFromMiddle(struct Node **head, int *count);
int removeFrombeginning(struct Node **head, int *count);
int changeByValue(struct Node **head, int *count);
int changeByPos(struct Node **head, int *count);
int changeOne(struct Node *head, int before, int after);
int changeAll(struct Node *head, int before, int after);
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
            changeNode();
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
    printf("9. Reload Application\n");
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
    int check = 1, count = 0;
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
    switch (opt)
    {
    case 1:
        check = 1;
        count = 0;
        do
        {
            check = removeFrombeginning(&head, &count);
        } while (check == 1);
        printf("%d Node successfully removed from beginning\n", count);
        loading();
        break;
    case 2:
        check = 1;
        count = 0;
        do
        {
            check = removeFromMiddle(&head, &count);
        } while (check == 1);
        printf("%d Node successfully removed from your given position\n", count);
        loading();
        break;
    case 3:
        check = 1;
        count = 0;
        do
        {
            check = removeFromEnd(&head, &count);

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

void changeNode()
{
    int opt;
    int check = 1, count = 0;
    printf("how you want to change node value? \n");
    Sleep(50);
    printf("1. Change by value\n");
    Sleep(50);
    printf("2. Change by position\n");
    Sleep(50);
    printf("0. Cancel\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        check = 1;
        count = 0;
        do
        {
            check = changeByValue(&head, &count);
        } while (check == 1);
        printf("You have made %d node value changes \n", count);
        loading();
        break;
    case 2:
        check = 1;
        count = 0;
        do
        {
            check = changeByPos(&head, &count);
        } while (check == 1);
        printf("You have made %d node value changes \n", count);
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

int removeFromEnd(struct Node **head, int *count)
{
    struct Node *temp = *head;
    struct Node *prev = temp;
    int check = 1;
    if (*head == NULL)
    {
        printf("List is allrady empty\n");
        return 0;
    }
    else if (temp->next == NULL)
    {
        printf("removed %d from the list\n\n", temp->data);
        *head = NULL;
        (*count)++;
    }
    else
    {
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        printf("removed %d from the list\n\n", temp->data);
        (*count)++;
    }
    printf("Press 1 to remove more\n");
    Sleep(50);
    printf("Press 0 to back\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &check);
    return check;
}
int removeFromMiddle(struct Node **head, int *count)
{
    int check = 1;
    int pos, cnt = 1;
    int nodeCount = countNode(*head);
    struct Node *temp = *head;
    printf("enter position \n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &pos);
    if (*head == NULL)
    {
        printf("List is allrady empty\n");
        return 0;
    }
    else if (nodeCount < pos)
    {
        printf("List contains maximum %d nodes\n", nodeCount);
        return 0;
    }
    else if (pos == 1)
    {
        *head = temp->next;
        printf("removed %d from the list\n", temp->data);
        (*count)++;
    }
    else
    {
        while (temp != NULL)
        {
            if (pos - 1 == cnt)
            {
                break;
            }
            temp = temp->next;
            cnt++;
        }
        printf("removed %d from the list\n", temp->next->data);
        temp->next = temp->next->next;
        (*count)++;
    }
    printf("Press 1 to remove more\n");
    Sleep(50);
    printf("Press 0 to back\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &check);
    return check;
}
int removeFrombeginning(struct Node **head, int *count)
{
    int check = 1;
    struct Node *temp = *head;
    struct Node *prev = temp;
    if (*head == NULL)
    {
        printf("List is allrady empty\n");
        return 0;
    }
    else if (temp->next == NULL)
    {
        printf("removed %d from the list\n\n", temp->data);
        *head = NULL;
        (*count)++;
    }
    else
    {
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        printf("removed %d from the list\n\n", temp->data);
        (*count)++;
    }
    printf("Press 1 to remove more\n");
    Sleep(50);
    printf("Press 0 to back\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &check);
    return check;
}

int changeByValue(struct Node **head, int *count)
{
    int check = 1;
    int change = 2;
    int before, after;
    printf("Press 1 to change all the matching value\n");
    Sleep(50);
    printf("Press 2 to change the first matching value\n");
    Sleep(50);
    printf("Press 0 to cancel\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &change);
    printf("Enter value which you want to change\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &before);
    printf("Enter value new value\n");
    Sleep(50);
    printf("==> ");
    scanf("%d", &after);
    switch (change)
    {
    case 1:
        *count = changeAll(*head, before, after);
        break;
    case 2:
        *count = changeOne(*head, before, after);
        break;
    case 0:
        printf("Operation canceled");
        loading();
        break;
    }
    return 0;
}
int changeByPos(struct Node **head, int *count)
{
    return 0;
}

int changeOne(struct Node *head, int before, int after)
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == before)
        {
            temp->data = after;
            count++;
            break;
        }
        temp = temp->next;
    }
    if (count == 0)
    {
        printf("list does not contains %d\n", before);
    }
    return count;
}
int changeAll(struct Node *head, int before, int after)
{
    return 0;
}