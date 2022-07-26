#include <stdio.h>
#include <math.h>
int search(int arr[],int size,int target);
void main ()
{
    int arr[] = {2,7,9,11,15,17,19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = search(arr,size,2);
    printf("%d",res);
}
int search(int arr[],int size,int target){
    int start = 0;
    int end = sqrt(size);  
    while(end <= size){
        if(arr[end] == target){
            return end;
        }else if(arr[end]>target){
            for(int i = start;i<end;i++){
                if(arr[i] == target){
                    return i;
                }
            }
        }else if(arr[end]<target){
            start = end+1;
            if((start+4) < (size-1)){
                end = start+4;
            }else{
                end = size-1;
            }
        }
    }
    return -1;
}