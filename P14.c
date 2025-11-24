//Harshad number(integer num which is divisible by sum of digits of num)

#include <stdio.h>

void main(){
   int n,sum=0,rem,originalNum;
   printf("Enter number:");
   scanf("%d", &n);
   originalNum = n;
   while(n!=0){
    
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }

   if((originalNum%sum)==0){
    printf("Harshad number");
   }else{
    printf("Not a Harshad number");
   }
}
