//. Write a program to search a given element in an array (Linear Search).

#include <stdio.h>

void main(){
    int size,x,found=0;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search");
    scanf("%d", &x);

    for(int i=0;i<size;i++){
        if(arr[i]==x){
            found = 1;
            printf("Element %d found at position %d",x,i+1);
            break;
        }else{
            found = 0;
        }
    }

    if(!found){
        printf("Element %d is not present in the array", x);
    }
}