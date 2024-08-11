#include <stdio.h>

double findAverage(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    double average = (double) total / size;
    return average;
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

    int size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    int arr[size];
    int newArr[size];
    int newSize = 0;

    printf("Enter the Elemenets of an Array is: ");
    for (int store = 0; store < size; store++)
    {
        scanf("%d", &arr[store]);

        if (arr[store] % 2 != 0)
        {
            newArr[newSize] = arr[store];
            newSize++;
        }
    }

    if (newSize == 0)
    {
        printf("No Odd Numbers in the array. Cannot calculate average.\n");
    }
    else
    {
        printf("Arrray after removeing even number: ");
        printArray(newArr, newSize);

        double average = findAverage(newArr, newSize);
        printf("Average of the remaining number: %f\n", average);
    }

    return 0;
}