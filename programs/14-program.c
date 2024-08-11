#include <stdio.h>

void printArray(int arr[], int size)
{
    int first;
    for (first = 0; first < size; first++)
    {
        printf("%d ", arr[first]);
    }
    printf("\n");
}

int findSum(int arr[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    return total;
}

int even(int number)
{
    return number % 2 == 0;
}



void delete(int arr[],int i,int *size){
    for(int j=i; j<*size+1; j++){
        arr[j] = arr[j + 1];
    }
    (*size)--;
}

void deleteEven(int arr[], int *size)
{
    int i = 0;
    while (i < *size)
    {
        if (even(arr[i]))
        {
            delete(arr,i,size);
        }
        else
        {
            i++;
        }
    }
}

void deleteOdd(int arr[],int *size){
    int i=0;
    while(i < *size){
        if(even(arr[i])){
            i++;
        }else{
            delete(arr,i,size);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 10, 20, 30, 40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = findSum(arr, size);

    if (sum > 100)
    {
        deleteEven(arr, &size);
        printf("After Delete Even Elements is: ");
        printArray(arr, size);
    }
    else
    {
        deleteOdd(arr, &size);
        printf("After Delete Odd Elements is: ");
        printArray(arr, size);
    }

    return 0;
}