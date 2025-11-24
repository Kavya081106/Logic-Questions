//             1
//          1   1
//        1   2   1
//      1   3   3    1
//    1  4    6   4   1
//  1  5   10   10  5   1



#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++)
            printf("  ");
        int coeff = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
