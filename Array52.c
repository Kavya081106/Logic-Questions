#include <stdio.h>

void main() {
    int size, second1 = -1, second2 = -1;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (size >= 2) {
        second1 = arr[size - 2];  // second largest
        second2 = arr[1];         // second smallest

        printf("Second largest element is %d\n", second1);
        printf("Second smallest element is %d\n", second2);
    } else {
        printf("No second largest or second smallest element\n");
    }
}
