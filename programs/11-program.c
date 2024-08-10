#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp[100] = {0};

    printf("Array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int j = 0; j < size; j++)
    {
        temp[arr[j]]++;
    }

    printf("\nFrequncey value is: \n");
    for (int k = 0; k < 100; k++)
    {
        if (temp[k] != 0)
        {
            printf("%d -> %d\n", temp[k], k);
        }
    }

    return 0;
}