//reverse array

#include <stdio.h>

void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size],rev[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size;i++){
        int temp = rev[i];
        rev[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    printf("Reversed array is \n");
    for(int i=0;i<size;i++){
        printf("%d\n", rev[i]);
    }


}