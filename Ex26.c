// Find the difference between the second largest element and the second smallest element of an array. 
// Input :  Enter the size of array: 7 
// Enter 7 elements: 5 1 9 7 1 5 3 
// Output: Difference: 4 

#include <stdio.h>

void main(){
    int size,second_largest=-1,second_smallest=-1;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int smallest = arr[0];
    int largest = arr[size-1];

    for(int i=size-1;i>=0;i--){
        if(arr[i]<largest){
            second_largest = arr[i];
            break;
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>smallest){
            second_smallest = arr[i];
            break;
        }
    }

    int diff = second_largest-second_smallest;

    printf("Difference between second largest %d and second smallest %d element is %d",second_largest,second_smallest, diff);
}