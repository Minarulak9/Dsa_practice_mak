#include <stdio.h>
#include <stdlib.h>
struct mak
{
    int x;
    int y;
};
void print(struct mak *ptr);
struct mak* func(int a, int b);
void main()
{
    struct mak *ptr1,*ptr2;
    ptr1 = func(4,5);
    ptr2 = func(8,1);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);
}
void print(struct mak *ptr){
    printf("%d %d\n",ptr->x,ptr->y);
}
struct mak* func(int a, int b){
    struct mak *ptr = (struct mak *) malloc(sizeof(struct mak));
    ptr->x = a;
    ptr->y = b;
    return ptr;
}