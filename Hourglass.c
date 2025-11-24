#include <stdio.h>
//Hourglass
void main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k < i; k++)
            printf(" ");
        for (int j = i; j <= n; j++) {
            if (j == i || j == n || i == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int k = 1; k < i; k++)
            printf(" ");
        for (int j = i; j <= n; j++) {
            if (j == i || j == n || i == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

//easier method


// #include <stdio.h>

// void main(){
//     int n;

//     printf("Enter number:\n");
//     scanf("%d", &n);

//     for(int i=1;i<=2*n-1;i++){
        

//        for(int j=1;j<=2*n-1;j++){
//         if(i==j|| j==2*n-i|| i==1 && (i+j)%2==0||i==2*n-1 && (i+j)%2==0){
//             printf("* ");
//         }else{
//             printf("  ");
//         }
//        }
           
           
            

//         printf("\n");
//     }

// }
