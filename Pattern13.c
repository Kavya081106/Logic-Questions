#include <stdio.h>

void main(){
    int n,count=65;
    printf("Enter number:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           printf("%c", count);
        }
        count++;
        printf("\n");
    }
}