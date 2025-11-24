
// Given an array, rotate the array to the right by k steps, where k is non-negative.  
// Input: nums = [1,2,3,4,5,6,7], k = 3 
// Output: [5,6,7,1,2,3,4] 

#include <stdio.h>

void main(){
    int size;

    printf("Enter size of array:\n");
    scanf("%d", &size);
    int arr[size];


    printf("Enter array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Array after reversing is :\n");

    for(int i=0;i<=size/2;i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}