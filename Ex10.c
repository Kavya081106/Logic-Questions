//WAP to enter an element at specific position into array. (Do not take a new array)

#include <stdio.h>

void main(){

    int size,pos,x;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size+1];

    printf("Enter array elements:\n");
    for(int i=1;i<=size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter position where you want to insert the element:");
    scanf("%d", &pos);

    printf("Enter element to insert:");
    scanf("%d", &x);

    for(int i=size+1;i>=pos;i--){
        arr[i] = arr[i-1];
       
    }
    arr[pos] = x;
    size++;

    printf("Array after inserting the element is:\n");
    
    for(int i=1;i<=size;i++){
        printf("%d ", arr[i]);
    }
    
}