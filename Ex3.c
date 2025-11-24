// WAP to find weather given number is Kaprekar or not. 
// A Kaprekar number is a non-negative integer that, when squared, can be split into two parts whose sum 
// equals the original number.  
// For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 + 25 = 45.


#include <stdio.h>

void main() {
    int n, flag = 0, originalNum;

    printf("Enter number: ");
    scanf("%d", &n);
    originalNum = n;

    if (n < 0) {
        printf("Not Kaprekar\n");
        return;
    }

    if (n == 1) { // added as 1 wont enter the loop as x<=square
        printf("Kaprekar\n");
        return;
    }

    int square = n * n;
    int x = 10;

    while (x <= square) {
        int rem = square % x;
        int quotient = square / x;

        if (rem > 0 && (rem + quotient) == originalNum) {// added rem =0 for nums like 10 
            flag = 1;
            break;
        }

        x = x * 10;
    }

    if (flag == 0) {
        printf("Not Kaprekar\n");
    } else {
        printf("Kaprekar\n");
    }
}
