// 1 
// 1 * 1 
// 1 * 3 * 1 
// 1 * 3 * 5 * 3 * 1  


#include <stdio.h>

void main() {
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++) {
        // Print increasing odd numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", 2*j - 1);
            if (j != i) printf(" * ");
        }
        // Print decreasing odd numbers (excluding middle)
        for (int j = i - 1; j >= 1; j--) {
            printf(" * %d", 2*j - 1);
        }
        printf("\n");
    }
}


