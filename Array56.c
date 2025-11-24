// Write a program to merge two arrays into a single array. 


#include <stdio.h>

void main() {
    int size1,size2,pos;

    printf("Enter size of array 1:");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter array 1 elements:");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array 2:");
    scanf("%d", &size2);
    int arr2[size2];

    printf("Enter array 2 elements:");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int total = size1+size2;

    int arr3[total];

    for(int i=0;i<size1;i++){
        arr3[i] = arr1[i];
    }

    for(int i=0;i<size2;i++){
        arr3[size1+i] = arr2[i];
    }

    for(int i=0;i<total;i++){
        printf("%d\n", arr3[i]);
    }


}