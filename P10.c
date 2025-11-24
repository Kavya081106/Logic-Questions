//sum of divisors of a number

#include <stdio.h>

void main(){
    int n,sum=0;
    printf("Enter number:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    printf("Sum of divisiors of given number is %d", sum);
}