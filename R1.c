#include <stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

void main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    printf("Fact of %d is %d", n,fact(n));
}