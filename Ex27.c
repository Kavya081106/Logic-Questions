#include <stdio.h>

void main() {
    int digits, sum = 0;

    printf("Enter no of digits: ");
    scanf("%d", &digits);
    int arr[digits];

    printf("Enter the digits: ");
    for (int i = 0; i < digits; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    int rem = sum % 3;

    // If sum not divisible by 3, make it divisible
    if (rem != 0) {
        int found = 0;

        // Case 1: Try removing one digit with remainder = rem
        for (int i = digits - 1; i >= 0; i--) {
            if (arr[i] % 3 == rem) {
                for (int j = i; j < digits - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                digits--;
                found = 1;
                break;
            }
        }

        // Case 2: If not found, remove two digits with remainder = 3 - rem
        if (!found) {
            int count = 0;
            for (int i = digits - 1; i >= 0 && count < 2; i--) {
                if (arr[i] % 3 == (3 - rem)) {
                    for (int j = i; j < digits - 1; j++) {
                        arr[j] = arr[j + 1];
                    }
                    digits--;
                    count++;
                    i++; // adjust index after shifting
                }
            }
        }
    }

    // Sort in descending order for largest number
    for (int i = 0; i < digits - 1; i++) {
        for (int j = i + 1; j < digits; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print result
    if (digits == 0)
        printf("No number can be formed divisible by 3.\n");
    else {
        printf("Largest possible number is: ");
        for (int i = 0; i < digits; i++) {
            printf("%d", arr[i]);
        }
    }
}
