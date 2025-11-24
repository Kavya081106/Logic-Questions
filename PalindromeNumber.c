//Palindrome number

#include <stdio.h>

void main(){
    int n,originalNum,rem,rev=0;
    printf("Enter number:");
    scanf("%d", &n);

    originalNum = n;

    while(n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }

    if(originalNum==rev){
        printf("Palindrome number");
    }else{
        printf("Not a palindrome number");
    }
}