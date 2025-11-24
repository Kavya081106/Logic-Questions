#include <stdio.h>

int fibb(int n){
    if(n==0 || n==1){
        return n;
    }
    
    return fibb(n-1)+fibb(n-2);
}

void main(){
    int n;


    printf("Enter number:");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
       printf("%d ", fibb(i));
    }
    
    
}