// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 
#include <stdio.h>

void main(){
    int n;

    printf("Enter number:");
    scanf("%d", &n);

    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            for(int k=0;k<n;k++){
                if(i==1+k|| j==1+k||i==2*n-1-k||j==2*n-1-k){
                printf("%d ",n-k);
                break;
                }
            }
        }
     printf("\n");
}
}