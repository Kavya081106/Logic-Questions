// 1
// 0 1
// 1 0 1
// 0 10 1

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}


//method 2
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         int count = i % 2;  // start with 1 if row is odd, 0 if even
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", count);
//             count = 1 - count;  // flip between 0 and 1
//         }
//         printf("\n");
//     }

//     return 0;
// }
