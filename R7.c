#include <stdio.h>

int reverse(int n, int rev){
    if(n == 0){
        return rev;
    }
    return reverse(n/10, rev * 10 + (n % 10));
}

int Palindrome(int originalNum){
    if(originalNum == reverse(originalNum, 0)){
        return 1;
    }
    return 0;
}

void main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(Palindrome(n) == 1){
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
}
