//Given 2 sorted arrays a[] and b[], each of size n, the task is to find the median of the array obtained 
// after merging a[] and b[]. 
// Input: a[] = [1, 12, 15, 26, 38], b[] = [2, 13, 17, 30, 45] 
// Output: 16 
// Explanation: The middle two elements are 15 and 17,  
// so median = (15 + 17)/2 = 16 

#include <stdio.h>

void main(){
    int size;

    printf("Enter size of array:");
    scanf("%d", &size);

    int arr1[size], arr2[size],arr3[2*size];

    printf("Enter array 1 elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }

    printf("Enter array 2 elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr2[i]);
        arr3[size+i] = arr2[i];
    }


    for(int i=0;i<2*size-1;i++){
        for(int j=i+1;j<2*size;j++){
            if(arr3[i]>arr3[j]){
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    if((2*size)%2==0){
        printf("Median is %d", (arr3[size-1]+arr3[size])/2);
    }

}