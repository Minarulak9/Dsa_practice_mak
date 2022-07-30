#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    char c;
    struct Node *next; 
};
void insertNode(struct Node *head,int data,char c);
void insertInOrder(struct Node *head,int data,char c);
void deleteNode(struct Node *head,int data);
void printNodes(struct Node *head);
void main(){
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->c='\0';
    head->data=0;
    head->next=NULL;
    insertNode(head,65,'A');
    insertNode(head,66,'B');
    insertNode(head,67,'C');
    insertNode(head,97,'A');
    insertInOrder(head,80,'X');
    insertInOrder(head,60,'A');
    deleteNode(head,66);
    printNodes(head);

}

void insertNode(struct Node *head,int data,char c){
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node *ptr = head;
    newNode->c = c;
    newNode->data = data;
    newNode->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;   
}
void printNodes(struct Node *head){
    struct Node *ptr = head;
    while(ptr!= NULL){
        printf("%d => %c\n",ptr->data,ptr->c);
        ptr = ptr->next;
    }
}
void insertInOrder(struct Node *head,int data,char c){
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node *ptr = head;
    newNode->c = c;
    newNode->data = data;
    while (ptr->next->data < data)
    {
        ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next=newNode;
}

void deleteNode(struct Node *head,int data){
    struct Node *ptr = head;
    struct Node *temp;
    while (ptr->next->data != data)
    {
        ptr = ptr->next;
        temp = ptr->next;
    }
    ptr->next = ptr->next->next;
    free(temp);
}