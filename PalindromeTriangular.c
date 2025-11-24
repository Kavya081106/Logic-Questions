//       1
//     2 1 2
//   3 2 1 2 3 
// 4 3 2 1 2 3 4


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf("  "); 

        for (int j = i; j >= 1; j--)
            printf("%d ", j);

        for (int j = 2; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}

//easier method


// #include <stdio.h>

// void main(){
//     int n,count;

//     printf("Enter number:\n");
//     scanf("%d", &n);

//     for(int i=1;i<=n;i++){

//         for(int k=1;k<=n-i;k++){
//             printf(" ");
//         }


//         for(int j=2;j<=i;j++){
//             printf("%d ",count);
//             count--;    
//         }

//         count=1;
       
//         for(int j=1;j<=i;j++){
//             printf("%d ", count);
//             count++;
//         }
//         printf("\n");

//     }

// }
