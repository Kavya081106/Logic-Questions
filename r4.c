#include <stdio.h>

int digit(int n){
    if(n==0){
        return 0;
    }
    
    return (n%10)+digit(n/10);
}

void main(){
    int n;


    printf("Enter number:");
    scanf("%d", &n);

    
    printf("Sum of digits is %d ", digit(n));
    
    
    
}