//sum of series 1+4+9....+n

#include <stdio.h>

void main(){
    int n,sum=0;
    printf("Enter number till which you want the sum:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        sum = (sum+(i*i));
    }
    printf("Sum of given series till %d is %d", n,sum);
}