#include<stdio.h>

int main(){

    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / 4;
    int total = 0;

    for(int i=0; i<size; i++){
        total += arr[i];
    }

    printf("Total sum of all elements is: %d",total);

    return 0;
}