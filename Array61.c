#include <stdio.h>

void main(){
     int sum = 0,rows,cols;

     printf("Enter number of rows:");
     scanf("%d", &rows);
     printf("Enter number of columns:");
     scanf("%d", &cols);
     int arr[rows][cols];

     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter [%d][%d] element:", i,j);
            scanf("%d", &arr[i][j]);
        }
     }

     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
     }

     printf("Sum of diagonal elements is %d", sum);

}