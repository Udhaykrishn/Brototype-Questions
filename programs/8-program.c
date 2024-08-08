#include<stdio.h>

int main(){

     int arr[] = {10,20,30,40,50};
     int size = sizeof(arr) / sizeof(arr[0]);
     int n = arr[0];

    printf("Array is: ");
     for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
     }

     for(int i=0; i<size; i++){
        if(n > arr[i]){
            n = arr[i];
        }
     }

     printf("\nMinimum Value in the Array is: %d",n);

    return 0;
}