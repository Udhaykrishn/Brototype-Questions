#include <stdio.h>
#include<math.h>


void printArray(int arr[], int size)
{
    for (int first = 0; first < size; first++)
    {
        printf("%d ", arr[first]);
    }
    printf("\n");
}

double findAverage(int arr[],int size){
    int total =0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }

    double average = (double) total / size;
    return average;
}

int isPrime(int number)
{
    if(number <=1 ){
        return 0;
    }

    for(int i=2; i<=sqrt(number); i++){
        if(number % i == 0){
            return 0;
        }
    }

    return 1;
}

void PrimeAverage(int arr[],int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(isPrime(arr[i])){
            count++;
        }
    }
    int prime[count]; 
    int k = 0;
    for(int j=0; j<size; j++){
        if(isPrime(arr[j])){
            prime[k] = arr[j];
            k++;
        }
    }

    double total = findAverage(prime,k); 

    printf("Prime Number is: ");
    printArray(prime,k);
    printf("Average of all Prime Number is: %f",total);
}

int main()
{

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array is: ");
    printArray(arr,size);

    PrimeAverage(arr,size);

    return 0;
}