//Write a program to find the intersection of two arrays. 

#include <stdio.h>

void main(){
    int size1,size2,flag=0;
    printf("Enter size of array 1:\n");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of array 1:\n");
    for(int i=0;i<size1;i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array 2:\n");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of array 2:\n");
    for(int i=0;i<size2;i++){
        scanf("%d", &arr2[i]);
    }


    printf("Insersection of two arrays is:\n");
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                flag=1;
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    if(flag==0){
        printf("Zero intersected elements");
    }
}