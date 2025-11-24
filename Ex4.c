// WAP to find weather given number is Automorphic or not. 
// An automorphic number is a number whose square ends with the same digits as the number itself.  
// For example, 5 is automorphic because 5² = 25, which ends in 5.  
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.

#include <stdio.h>

int Automorphic(int n){

    int square = n*n;

    while(n!=0){
        int rem = n%10;
        int square_rem = square%10;

        if(rem!=square_rem){
          return 0; 
        }

        n = n/10;
        square = square/10;
    }

    return 1;
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    if(Automorphic(n)==1){
        printf("Automorphic number");
    }else{
        printf("Not Automorphic number");
    }
}

//easier

// WAP to find weather given number is Automorphic or not. 
// An automorphic number is a number whose square ends with the same digits as the number itself.  
// For example, 5 is automorphic because 5² = 25, which ends in 5.  
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76. 


#include <stdio.h>


void main(){
    int n,rem,quotient,flag=0,digit=0,rem2,rev=0,originalNum;

    printf("Enter number:");
    scanf("%d", &n);
    originalNum = n;

    int square = n*n;

    while(n!=0){
        rem = n%10;
        digit = digit+1;
        n=n/10;
    }

    for(int i=0;i<digit;i++){
            rem2 = square%10;
            rev = (rev*10)+rem;
            square = square/10;
    }

    if(rev==originalNum){
        printf("Automorphic");
    }else{
        printf("Not Automorphic");
    }
}