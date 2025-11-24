#include <stdio.h>
void main()
{

    // 1
    // 121
    // 1*3*1
    // 1**4**1
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("1"); // first 1

        if(i == 2) {
            printf("2"); // middle number for row 2
        } else if(i > 2) {
            // print left stars
            for(j = 1; j <= i - 2; j++)
                printf("*");
            
            printf("%d", i); // middle number
            
            // print right stars
            for(j = 1; j <= i - 2; j++)
                printf("*");
        }

        if(i >= 2) printf("1"); 
        printf("\n");
    }
}
