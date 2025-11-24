#include <stdio.h>
//Prime number

void main(){
    int n,flag=1;
    printf("Enter number:");
    scanf("%d", &n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

    if(flag==0){
        printf("%d is not prime", n);
    }else{
        printf("%d is prime", n);
    }

}