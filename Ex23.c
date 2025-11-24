// Given an array, rotate the array to the right by k steps, where k is non-negative.  
// Input: nums = [1,2,3,4,5,6,7], k = 3 
// Output: [5,6,7,1,2,3,4] 

#include <stdio.h>

void main(){
    int size,shift;

    printf("Enter size of array:\n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter shift count of array:");
    scanf("%d", &shift);

    printf("Enter array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }


    for(int i=0;i<shift;i++){
       int temp =  arr[0];
        for(int j=0;j<size;j++){
            arr[j] = arr[j+1];
        }
        arr[size-1] = temp;
        
    }

    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    


}