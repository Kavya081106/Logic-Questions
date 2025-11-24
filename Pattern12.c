#include <stdio.h>

void main(){
    int n,count=1,charcount=65;
    printf("Enter number:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ", count);
                count++;
            }
        }else{
            for(int j=1;j<=i;j++){
                printf("%c ",charcount);
                charcount++;
            }
        }
        printf("\n");
    }
}