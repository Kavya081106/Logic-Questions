//print gcd of 2 numbers

#include <stdio.h>

void main(){
    int n1,n2;
    printf("Enter number 1:");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);

    int min = (n1<n2)?n1:n2; //for example 5 and 15 we know that gcd cant be more than 5 

    for(int i=min;i>=1;i--){ //starting from minimum from two nums we start checking if 5||4||3||2||1 is gcd
        if(n1%i==0 &&n2%i==0){
            printf("%d",i);
            break;
        }
    }
}

//method 2 approch

// void main(){
//     int n1,n2;
//     printf("Enter number 1:");
//     scanf("%d", &n1);
//     printf("Enter number 2:");
//     scanf("%d", &n2);
//     int arr1[n1],arr2[n2],index1=0,index2=0;
//     for(int i=1;i<=n1;i++){
//       if(n1%i==0){
//         arr1[index1] = i;
//         index1++;
//       }  
//     }
//     for(int j=1;j<=n2;j++){
//       if(n2%j==0){
//         arr2[index2] = j;
//         index2++;
//       }  
//     }

//     for(int i=1;i<=n1;i++){
//         for(int j=1;j<=n2;j++){
//             if(arr1[i]==arr2[j]){
//                 printf("%d", i);
//             }
//         }
//     }
// }
