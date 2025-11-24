//  Write a program to remove duplicate elements from an array.

#include <stdio.h>

void main(){
   int size,count=0;

   printf("Enter size of array:");
   scanf("%d", &size);
   int arr[size];

   printf("Enter array elements:\n");
   for(int i=0;i<size;i++){
    scanf("%d", &arr[i]);
   }

   for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            arr[j] = -9999;
            size--;
        }
    }
}

for(int i=0;i<size;i++){
    if(arr[i]!=-9999){
        printf("%d\n", arr[i]);
    }
}

   
}

//other approach

#include <stdio.h>

void main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {

                // Shift elements left to remove duplicate
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                size--;  
                j--;     // stay at same index to check new value
            }
        }
    }

    printf("\nArray without duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
