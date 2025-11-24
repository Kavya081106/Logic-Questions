#include <stdio.h>
//swastik

void main(){
    int rows,cols;
    printf("Enter no of rows:");
    scanf("%d", &rows);
    printf("Enter no of cols:");
    scanf("%d", &cols);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(j==(cols+1)/2  || i==(rows+1)/2|| (j==1 && i<=(rows)/2)||(j==cols && i>(cols)/2)||(i==1 && j>(cols)/2 )||(i==rows && j<=(cols)/2 )){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
