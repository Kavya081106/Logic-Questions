#include <stdio.h>

int power(int base,int exp){
    if(exp==0){
        return 1;
    }
    
    return base*power(base,exp-1);
}

void main(){
    int base,exp;


    printf("Enter base:");
    scanf("%d", &base);
    printf("Enter exponent:");
    scanf("%d", &exp);

    printf("Power of given base %d and exponent %d is %d", base,exp,power(base,exp));
    
    
    
}