//Write a program to insert an element at a specific position in an array. 

#include <stdio.h>

void main() {
    int size,x,pos;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size+1];

    printf("Enter array elements:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position where you want to insert the element:");
    scanf("%d", &pos);

    printf("Enter element to insert:");
    scanf("%d", &x);

    for(int j=size;j>=pos;j--){
        arr[j] = arr[j-1];
    }
    arr[pos-1] = x;
    size++;
    for(int j=0;j<size;j++){
        printf("%d ", arr[j]);
    }


}