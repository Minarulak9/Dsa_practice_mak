#include<stdio.h>
void main ()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    while(n<=100){
        printf("%d\n",n);
        n++;
    }
}