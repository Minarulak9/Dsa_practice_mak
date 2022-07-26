#include <stdio.h>
#include <stdlib.h>
void sortAndSave();
int main()
{
    int number[50000];
    sortAndSave(number,50000);


    return 0;
}
void sortAndSave(int arr[],int size){
    FILE *fp = fopen("number.txt","r");
    for (int i = 0; i < size; i++)
    {
        fscanf(fp,"%d",&arr[i]);
    }
    fclose(fp);
    FILE *sorted = fopen("sorted.txt","w");
    for (int i = 0; i < size; i++)
    {
        fprintf(sorted,"%d ",arr[i]);
    }
    fclose(fp);
}
