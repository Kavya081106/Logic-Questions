//             1 
//          1   1 
//        1   2   1 
//      1   3   3    1 
//    1  4    6   4   1 
//  1  5   10   10  5   1 


#include <stdio.h>

void main(){
    int rows,c;

    printf("Enter no of rows:");
    scanf("%d", &rows);

    for(int i=0;i<rows;i++){
        for(int k=1;k<rows-i;k++){
            printf(" ");
        }
            for(int j=0;j<=i;j++){
                if(i==0 || j==0){
                     c = 1;
                }else{
                    c = (c*(i-j+1))/j;
                }
                 printf("%d ",c);
            }
            printf("\n");
        }
    }

