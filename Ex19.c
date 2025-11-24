// Write a program to print following pattern 
// For n=5 
// 1 2 3 4 5 
// 10 9 8 7 6 
// 11 12 13 14 15 
// 20 19 18 17 16 
// 21 22 23 24 25

#include <stdio.h>

void main(){
    int n,count=1;

    printf("Enter n:");
    scanf("%d", &n);

    

    for(int i=1;i<=n;i++){
        
            if(i%2!=0){
                for(int j=1;j<=n;j++){
                printf("%d ", count);
                count++;
            }}else{
                for(int j=0;j<n;j++){
                    printf("%d ", n*i-j);
                    count++;
                }
            }
            printf("\n");
    }
}