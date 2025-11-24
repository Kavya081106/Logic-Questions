// Given an array of positive integers arr[] of size n, the task is to find the second largest distinct element in 
// the array. 
// Note: If the second largest element does not exist, return -1.

#include <stdio.h>

void main(){
    int size,second_largest=-1;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int largest = arr[size-1];

    for(int i=size-1;i>=0;i--){
        if(arr[i]<largest){
            second_largest = arr[i];
            break;
        }
    }
    if(second_largest==-1){
        printf("%d", second_largest);
        return;
    }
    printf("Second Largest element is %d", second_largest);
}