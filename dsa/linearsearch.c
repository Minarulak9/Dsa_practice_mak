#include<stdio.h>
int search(int arr[],int size,int target);
void main ()
{
    int arr[] = {2,7,9,11,15,17,19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = search(arr,size,17);
    printf("%d",res);
}
int search(int arr[],int size,int target){
    for(int i = 0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}