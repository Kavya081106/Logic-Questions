#include <stdio.h>

int isInArray(int a[], int size, int m) {
    if (size == 0)
        return 0;  // base case: array empty → not found

    if (a[size - 1] == m)
        return 1;  // found element

    return isInArray(a, size - 1, m);
}

void main() {
    int n, m;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &m);

    if (isInArray(arr, n, m))
        printf("Number is present in array.\n");
    else
        printf("Number is NOT present in array.\n");
}
