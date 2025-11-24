#include <stdio.h>

int gcd(int n1, int n2){
    if(n2 == 0){
        return n1;
    }
    return gcd(n2, n1 % n2);
}

void main(){
    int n1, n2;

    printf("Enter number 1: ");
    scanf("%d", &n1);

    printf("Enter number 2: ");
    scanf("%d", &n2);

    printf("GCD of %d and %d is %d", n1, n2, gcd(n1, n2));
}
