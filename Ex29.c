#include <stdio.h>
#include <math.h>

void main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int dp[n + 1];

    dp[0] = 0;  // Base case: 0 needs 0 perfect squares

    for (int i = 1; i <= n; i++) {
        dp[i] = i;  // Maximum count = i (1^2 + 1^2 + ... + 1^2)
        for (int j = 1; j * j <= i; j++) {
            int square = j * j;
            if (square > i)
                break;
            if (dp[i - square] + 1 < dp[i])
                dp[i] = dp[i - square] + 1;
        }
    }

    printf("Least number of perfect squares: %d\n", dp[n]);
}
