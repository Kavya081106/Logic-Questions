// Write a program to rotate array elements to the left or right. 

#include <stdio.h>

void main() {
    int n1, n2, i, j,choice;

    printf("Enter size of array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter choice 1 for left and 2 for right:");
    scanf("%d", &choice);

    if(choice==1){
       arr1[n1] = arr1[0];
        for(int i=0;i<n1;i++){
            arr1[i] = arr1[i+1];
        }
    }

    else if(choice==2){
         int temp = arr1[n1-1];
        for(int i=n1-1;i>=1;i--){
           
            arr1[i] = arr1[i-1];
            
        }
        arr1[0] = temp;
    }else{
        printf("Invalid choice");
    }

    for(int i=0;i<n1;i++){
        
        printf("%d ", arr1[i]);
    }

    

}