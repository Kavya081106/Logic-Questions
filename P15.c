//prime or not

#include <stdio.h>

void main(){
   int n,count=0;
   printf("Enter number:");
   scanf("%d", &n);
   for(int i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }
    }

    if(count==2){
        printf("prime number");
    }else{
        printf("Not a prime number");
    }

}



// #include <stdio.h>

// void main() {
//     int n, flag = 0;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     if (n <= 1) {
//         printf("Not a prime number");
//         return;
//     }

//     for (int i = 2; i <= n/2; i++) {
//         if (n % i == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//         printf("Prime number");
//     else
//         printf("Not a prime number");
// }
