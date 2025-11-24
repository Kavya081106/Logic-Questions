//Power without power and multiplication operator

#include <stdio.h>

void main(){
    int n1,n2,sum=1;
    printf("Enter no 1:");
    scanf("%d", &n1);
    printf("Enter no 2:");
    scanf("%d", &n2);

    for(int i=1;i<=n2;i++){ //how many times n1 is multiplied by n2 
        int temp=0;
        for(int j=1;j<=n1;j++){  //how many times to add two numbers example 2^2 = 2+2
            temp = temp+sum;
        }
        sum=temp;
       
    }

    printf("sum is %d", sum);
}