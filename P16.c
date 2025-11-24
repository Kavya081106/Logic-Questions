//fibonnacci series
//0 1 1 2 3 5

#include <stdio.h>

void main(){
   int n,a=0,b=1,next;
   printf("Enter number till you want the series:");
   scanf("%d", &n);
   printf("%d\n", a);
   printf("%d\n", b);
   for(int i=1;i<=n;i++){
        next = a+b;
        printf("%d\n",next);
        a = b;
        b = next;
   }


}