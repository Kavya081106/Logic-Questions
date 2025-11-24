#include <stdio.h>

//Write a program to count total even and odd numbers in an array. 

void main(){
    int size,even=0,odd=0;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    printf("Total number of odd numbers are %d\n", odd);
    printf("Total number of even numbers are %d", even);

}