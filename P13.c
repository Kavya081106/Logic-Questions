//perfect number  (number's divisors sum is equal to the num)

#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Not perfect\n");
        return 0;
    }

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n)
        printf("Perfect\n");
    else
        printf("Not perfect\n");

    return 0;
}

