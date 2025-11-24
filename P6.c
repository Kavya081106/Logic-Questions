//perform multiplication without *

#include <stdio.h>

void main(){
    int n1,n2,rem,sum=0;
    printf("Enter number 1:");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);
    for(int i=1;i<=n2;i++){
        sum = sum+n1;
    }
    printf("Sum is %d", sum);

}