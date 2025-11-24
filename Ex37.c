// WAP to multiply two matrices with error checking for dimension compatibility. 

#include <stdio.h>

void main(){
    int rows1,cols1,rows2,cols2;

    printf("Enter rows and cols of matrix 1:");
    scanf("%d %d", &rows1,&cols1);

    printf("Enter rows and cols of matrix 2:");
    scanf("%d %d", &rows2,&cols2);

    if(cols1!=rows2){
        printf("Error!!!!! Matrix are incompatible to be multiplied");
    }else{
        printf("Matrix are compatible and can be multiplied with each other");
    }


}