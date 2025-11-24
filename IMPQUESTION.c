//perform power without * and power operators

#include <stdio.h>

void main(){
    int n1,n2,rem,sum=1,temp;
    printf("Enter number 1:");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);

    for(int i=1;i<=n2;i++){
        temp = 0;
        for(int i=1;i<=n1;i++){
            temp = temp+sum;
        }
        sum = temp;
    }

    printf("Power is %d", sum);
}
