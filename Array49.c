// Write a program to copy all elements from one array to another. 

#include <stdio.h>

void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size],arr2[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

   for(int i=0;i<size;i++){
    arr2[i] = arr[i];
    printf("%d\n",arr2[i]);
   }


}