//lcm of 2 numbers
// n1*n2/gcd

#include <stdio.h>

void main(){
    int n1,n2;
    printf("Enter number 1:");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);

    int min = (n1<n2)?n1:n2; 

    for(int i=min;i>=1;i--){   //we know that lcm * gcd  = n1*n2
        if(n1%i==0 &&n2%i==0){
            printf("%d",(n1*n2)/i);
            break;
        }
    }
}

// void main(){
//     int n1,n2,rem,sum=1;

//     printf("Enter number 1:");
//     scanf("%d", &n1);
//     printf("Enter number 2:");
//     scanf("%d", &n2);

//     int max = (n1>n2)?n1:n2;

//     for(int i=1;i<=max;i++){
//         if(i%n1==0 && i%n2==0){
//             printf("Lcm is %d",i);
//             break;
//         }
//     }

// }
