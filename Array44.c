//Write a program to input and display elements of an array. 

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
        printf("%d \n", arr[i]);
    }
}
