//Sum of 10 numbers
//Runtime sum
#include <stdio.h>

void main(){
    int n,sum=0;
    for(int i=1;i<=10;i++){
        printf("Enter number:");
        scanf("%d", &n);
        sum = sum+n;
    }
    printf("%d", sum);
}