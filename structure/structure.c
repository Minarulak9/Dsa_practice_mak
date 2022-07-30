#include <stdio.h>
struct size
{
    char a;
    char b;
    char c;
    char d;
    int x;
    char e;
}*p;
void print(struct size s);
void printByAd(struct size *s);
struct size modify(struct size *s);
struct mak func(int a, int b);
void main()
{
    struct size a1 = {'J','M','A','B',2,'A'};
    struct size a2 = {'M','I','N','A',100,'W'};
    p = &a1;
    printf("%d\n",p->x);
    printf("%d\n",sizeof(a1));
    print(a1);
    printByAd(&a2);
    a1 = modify(&a1);
    print(a1);
    // a3 = func(5,6);
    // print(&a3);

}

void print(struct size s){
    printf("%c %c %c %c %c %d\n",s.a,s.b,s.c,s.d,s.e,s.x);
}

void printByAd(struct size *s){
    printf("%c %c %c %c %c %d\n",s->a,s->b,s->c,s->d,s->e,s->x);
}
struct size modify(struct size *s){
    scanf("%d",&s->x);
    return *s;
}

