//WAP to Convert a Decimal to Octal and vice versa. 

#include <stdio.h>
#include <math.h>

// void main(){
    //Decimal to Octal
    // int n,rev = 0,rev1=0;
    // printf("Enter number:");
    // scanf("%d", &n);
    // while(n!=0){
    //     int rem = n%8;
    //     rev = (rev*10)+rem;
    //     n = n/8;
    // }

    // while(rev!=0){
    //     int rem1 = rev%10;
    //     rev1 = (rev1*10)+rem1;
    //     rev = rev/10;
    // }

    // printf("Octal of given decimal number is %d", rev1);
// }


//Method 2 for decimal to octal
// void main(){
//     int n,rev = 0,k=1;
//     printf("Enter number:");
//     scanf("%d", &n);

//     while(n!=0){
//         int rem = n%8;
//         rev = rev+rem*k;
//         k = k*10;
//         n = n/8;
//     }

//     printf("Octal of given decimal number is %d", rev);
// }


//Octal to Decimal

void main(){
    int n,sum=0,i=0;

    printf("Enter number:");
    scanf("%d", &n);

    while(n!=0){
        int rem = n%10;
        sum = sum+(rem*(pow(8,i)));
        i++;
        n = n/10;
    }

    printf("Decimal of given octal number is %d", sum);



}

