//Write a program to reverse the elements of an array.

#include <stdio.h>

void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<size;i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
    }


}