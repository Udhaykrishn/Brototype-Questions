#include<stdio.h>


void printArray(int arr[],int size){
    int first;
    for(first=0; first<size; first++){
        printf("%d ",arr[first]);
    }
    printf("\n");
}

int main(){

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int merge[mergedSize];

    printf("First Array is: ");
    printArray(arr1,size1);

    for(int i=0; i<size1; i++){
        merge[i] = arr1[i];
    }

    for(int j=0; j<size2; j++){
        merge[size1 + j] = arr2[j];
    }

    printf("Mergead array is: ");
    printArray(merge,mergedSize);
    return 0;
}