// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying 
// at most one element.  
// Input: nums = [4,2,3] 
// Output: true 
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array. 

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int changes = 0;

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){

            changes++;

            if(changes > 1){
                printf("false\n");
                return 0;
            }
            if(i==0 || arr[i-1] <= arr[i+1])
                arr[i] = arr[i+1];
            else
                arr[i+1] = arr[i];
        }
    }

    printf("true\n");
    return 0;
}

