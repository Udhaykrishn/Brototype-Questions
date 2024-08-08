#include<stdio.h>

void printArray(int arr[],int size){
    int first;
    for(first=0; first<=size; first++){
        printf("%d ",arr[first]);
    }
    printf("\n");
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = (sizeof(arr) / 4)-1;

    printf("Array is: ");
    printArray(arr,size);
    int i=0,j=size;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printf("Reverse Array is: ");
    printArray(arr,size);


    return 0;
}