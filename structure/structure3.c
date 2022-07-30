#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
void printList(struct Node *head);
void countList(struct Node *head);
struct Node *insertB(struct Node *head,int data);
void insertLast(struct Node *head,int data);

void main(){
    struct Node *head,*temp,*temp2;
    head = NULL;
    temp = (struct Node*) malloc(sizeof(struct Node));
    temp->val = 45;
    temp->next = NULL;
    head = temp;
    temp2 = (struct Node*) malloc(sizeof(struct Node));
    temp2->val = 23;
    temp2->next = NULL;
    temp->next = temp2;
    head = insertB(head,43);
    head = insertB(head,56);
    insertLast(head,15);
    printList(head);
    countList(head);
}

void printList(struct Node *head){
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n",ptr->val);        
        ptr= ptr->next;
    }
    
}
void countList(struct Node *head){
    if(head == NULL){
        printf("List is empty");
    }
    int count = 0;
    struct Node *ptr = head;
    while (ptr != NULL)
    {
       count++;
       ptr = ptr->next;
    }
    printf("%d",count);
    
}
struct Node *insertB(struct Node *head,int data){
    struct Node *current = (struct Node*) malloc(sizeof(struct Node));
    current->val = data;
    current->next = head;
    return current;
}
void insertLast(struct Node *head,int data){
    struct Node *current = (struct Node*) malloc(sizeof(struct Node));
    current->val = data;
    current->next = NULL;
    struct Node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = current;
}