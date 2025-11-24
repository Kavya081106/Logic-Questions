#include <stdio.h>

void main() {
    int size, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size], freq[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 1;
    }

    for(int i = 0; i < size; i++) {
        if(freq[i] == 0) continue;

        int c = 1;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                c++;
                freq[j] = 0;
            }
        }

        if(c > 1) {
            count++;
        }
    }

    printf("Total duplicate elements: %d", count);
}
