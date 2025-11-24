//WAP to Convert a Decimal to Hexa-decimal and vice versa. 


#include <stdio.h>
#include <math.h>

// void main(){
    //Decimal to Hexadecimal
//     int n,i=0;
//     char arr[100];
//     printf("Enter number:");
//     scanf("%d", &n);

//     while(n!=0){
//         int rem = n%16;
//         if(rem<10){
//             rem = rem+'0';
//         }
//         else if(rem>10){
//             rem = rem+'A'-10;
//         }
//         arr[i] = rem;
//         i++;
//         n = n/16;
//     }

    
//     for(int j=i-1;j>=0;j--){
//         printf("%c", arr[j]);
//     }

// }

//Hexadecimal to Decimal

#include <stdio.h>
#include <math.h>

void main() {
    int arr[100];
    int n, i = 0, len, decimal = 0, base = 1;

    printf("Enter number of hexadecimal digits: ");
    scanf("%d", &n);

    printf("Enter %d hexadecimal digits (use 0–9 or A–F):\n", n);

    for (i = 0; i < n; i++) {
        char ch;
        scanf(" %c", &ch); 

        if (ch >= '0' && ch <= '9')
            arr[i] = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            arr[i] = ch - 'A' + 10;
        else if (ch >= 'a' && ch <= 'f')
            arr[i] = ch - 'a' + 10;
        else {
            printf("Invalid hex digit %c\n", ch);
            return;
        }
    }

    for (i = n - 1; i >= 0; i--) {
        decimal = decimal + arr[i] * base;
        base = base * 16;
    }

    printf("Decimal equivalent: %d", decimal);
}
