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

    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Smallest number in array is %d",min);
    
}