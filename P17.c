//series 1-2+3-4+.....+-n

#include <stdio.h>

void main(){
   int n,sum=0;
   printf("Enter number till you want the series:");
   scanf("%d", &n);
   for(int i=1;i<=n;i++){
        if(i%2==0){
            sum = sum-i;
        }
        else{
            sum = sum+i;
        }
   }

   printf("Sum is %d", sum);
}