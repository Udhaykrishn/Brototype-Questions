#include<stdio.h>

void sort(int arr[],int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int duplicate(int arr[],int size){
    int index = 0;
    for(int i=0; i<size; i++){
        int isDuplicate = 0;
        for(int j=0; j<index; j++ ){
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

int main(){

    int arr[] = {30,10,50,20,40,60,40,100,100};
    int size = sizeof(arr) / 4;

    sort(arr,size);

    int len = duplicate(arr,size);

    printf("Second Largest Number is: %d",arr[len-2]);

    return 0;
}