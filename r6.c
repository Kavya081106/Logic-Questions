#include <stdio.h>

int count(int n){
    if(n==0){
        return 0;
    }
    
    return 1+count(n/10);
}

void main(){
    int n;


    printf("Enter number:");
    scanf("%d", &n);

    
    printf("Count of digits is %d ", count(n));
    
}