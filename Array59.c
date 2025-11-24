#include <stdio.h>

void main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    int freq[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 0; 
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                freq[i]++;
            }
        }
    }

    printf("Unique elements in the array: ");
    for(int i = 0; i < size; i++) {
        if(freq[i] == 1) {  
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}
