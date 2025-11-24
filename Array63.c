#include <stdio.h>

void main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows for array 1: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for array 1: ");
    scanf("%d", &cols1);

    int arr1[rows1][cols1];
    printf("Enter elements of array 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter number of rows for array 2: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for array 2: ");
    scanf("%d", &cols2);

    int arr2[rows2][cols2], arr3[rows1][cols2];

    printf("Enter elements of array 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("Invalid input — matrix multiplication not possible.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {   //C[0][0] = (1×7) + (2×9) + (3×11)  Notice there are 3 multiplications — because there are 3 columns in A (or 3 rows in B).
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("After matrix multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
