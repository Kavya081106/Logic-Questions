// ugly number(a positive integer that does not have prime factor other than 2,3,5)

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not ugly number\n");
        return 0;   
    }

    while (n % 2 == 0)
        n = n / 2;

    while (n % 3 == 0)
        n = n / 3;

    while (n % 5 == 0)
        n = n / 5;

    if (n == 1)
        printf("Ugly number\n");
    else
        printf("Not ugly number\n");

    return 0;
}




