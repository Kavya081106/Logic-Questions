// For n=4 
// 1 
// 2   5 
// 3   6   8 
// 4   7   9  10 

#include <stdio.h>

void main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int count = i;
        int diff = n - 1;  

        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count += diff;   
            diff--;          
        }
        printf("\n");
    }
}
