#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int first = 0; first < size; first++)
    {
        printf("%d ", arr[first]);
    }
    printf("\n");
}

int duplicate(int arr[],int size){
    if(size == 1 || size == 0){
        return size;
    }

    int index = 0;
    for(int i=0; i<size; i++){
        int isDuplicate = 0;
        for(int j=0; j<index; j++){
            if(arr[i] == arr[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate){
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array is: ");
    printArray(arr,size);

    int len = duplicate(arr,size);

    printf("Remove Duplicates Value in Array is: ");
    printArray(arr,len);

    return 0;
}