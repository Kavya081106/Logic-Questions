#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    
    return n+sum(n-1);
}

void main(){
    int n,size;

    printf("Enter how many numbers do you want to add:");
    scanf("%d", &size);

    for(int i=1;i<=size;i++){
        printf("Enter number:");
        scanf("%d", &n);
    }
    

    printf("Sum is %d", sum(n));
}