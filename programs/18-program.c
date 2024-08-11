#include<stdio.h>
#include<math.h>

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int isPrime(int number){
    if(number <= 1){
        return 0;
    }

    for(int i=2; i<=sqrt(number); i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}


int isEven(int number){
    return number % 2 == 0;
}


void PrimeAndEven(int arr[],int size){
    for(int i=0; i<size; i++){
        if(isPrime(arr[i])){
            arr[i] = 0;
        }else if(isEven(arr[i])){
            arr[i] = 1;
        }
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array is: ");
    printArray(arr,size);

    PrimeAndEven(arr,size);

    printf("Prime Number: 0 & Even Number: 1\n");
    printf("Converted array is: ");
    printArray(arr,size);

    return 0;
}