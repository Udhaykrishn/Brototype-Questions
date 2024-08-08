#include<stdio.h>

void printArray(int arr[],int size){
    int first;
    for(first=0; first<size; first++){  
        printf("%d ",arr[first]);
    }
    printf("\n");
}

int main(){

    int arr[] = {30,10,50,20,40};
    int size = sizeof(arr) / 4;

    printf("Original Array is: ");
    printArray(arr,size);

    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array is: ");
    printArray(arr,size);


    return 0;
}