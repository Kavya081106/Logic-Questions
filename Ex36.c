// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose 
// sum is equal to K.  
// Input: N = 4, K = 6, arr[] = {1, 5, 7, 1} Output: 2 
#include <stdio.h>

void main(){
    int size,k,count=0;

    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements whose sum you want to know:");
    scanf("%d", &k);

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])==k){
                count = count+1;
            }
        }
    }

    printf("No of pairs whose sum is %d is %d", k,count);


}