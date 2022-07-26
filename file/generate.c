#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateRandNum();
void saveTofile();
int main()
{
    int arr[50000];
    srand(time(0));
    // printf("%d", rand()%(100-50+1)+50);
    generateRandNum(arr,10,100,50000);
    saveTofile(arr,50000);
    // for(int i = 0;i<20;i++){
    //     printf("%d ",arr[i]);
    // }
    return 0;
}
void generateRandNum(int arr[],int min,int max,int count){
    for(int i = 0;i<count;i++){
        arr[i] = rand()%(max-min+1)+min;
    }
}
void saveTofile(int arr[],int size){
    FILE * fp = fopen("number.txt","w");
    for(int i = 0;i<size;i++){
        fprintf(fp,"%d ",arr[i]);
    }
    fclose(fp);
}
