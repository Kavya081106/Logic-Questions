// Write a program to find the sum and average of elements in an array.

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
    printf("Sum is %f\n", sum);
    avg = sum/size;
    printf("Average is %f", avg);
}