#include<stdio.h>
int search(int arr[],int size,int target);
void main ()
{
    int arr[] = {2,7,9,11,15,17,19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = search(arr,size,16);
    printf("%d",res);
}
int search(int arr[],int size,int target){
    int start = 0;
    int end = size-1;  
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]>target){
            end = mid-1;
        }else if(arr[mid]<target){
            start = mid+1;
        }
    }
    return start;
}