#include <stdio.h>

void delete(int arr[], int *size)
{
    int i = 0;
    while (i < *size)
    {
        if (arr[i] % 2 == 0)
        {
            for (int j = i; j < *size + 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*size)--;
        }
        else
        {
            i++;
        }
    }
}

void reverse(int arr[], int size)
{
    int i = 0, j = size-1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[],int size){
    int first;
    for(first=0; first<size; first++){
        printf("%d ",arr[first]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array is: ");
    printArray(arr,size);

    printf("Reversed Array is: ");
    reverse(arr,size);
    printArray(arr,size);

    printf("Delete Even Number in Reversed Array is: ");
    delete(arr,&size);
    printArray(arr,size);

    return 0;
}