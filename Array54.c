// Write a program to delete an element from a specific position in an array.

#include <stdio.h>

void main() {
    int size,pos;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position from where you want to delete the element:");
    scanf("%d", &pos);

    for(int i=pos-1;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    size--;

    printf("Array after deleting the element is \n");
    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
    }
    
}