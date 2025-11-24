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
    printf("Enter element to search:");
    scanf("%d", &x);

   
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            found=1;
            printf("Element found at position %d",i+1);
            break;
        }
    } 
    
    if(!found){
        printf("Element not found");
    }
}