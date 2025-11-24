//print numbers divisible by2 between two numbers

#include <stdio.h>

void main(){
    int n1,n2,rem;
    printf("Enter number 1:");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);

    for(int i=n1;i<=n2;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}