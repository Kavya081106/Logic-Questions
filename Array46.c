// Write a program to find the maximum and minimum elements in an array.

#include <stdio.h>

void main(){
    int size;
    float avg,sum=0.0;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }

    int max = arr[0],min = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }

        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d", min);
}