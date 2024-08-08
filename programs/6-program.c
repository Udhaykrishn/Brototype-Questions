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

int main()
{

    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {10, 20, 30, 40, 50,100};
    int size = sizeof(a2) / 4;
    int final[size];

    for(int i=0; i<size; i++){
        final[i] = a1[i] + a2[i];
    }

    printf("First Array: ");
    printArray(a1,size);

    printf("Second Array: ");
    printArray(a2,size);
    printf("Final Array: ");
    printArray(final,size);

    return 0;
}