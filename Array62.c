//Write a program to find the transpose of a matrix. 

#include <stdio.h>

void main(){
     int sum = 0,rows,cols;

     printf("Enter number of rows:");
     scanf("%d", &rows);
     printf("Enter number of columns:");
     scanf("%d", &cols);
     int arr[rows][cols],arr2[rows][cols];

     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter [%d][%d] element:", i,j);
            scanf("%d", &arr[i][j]);
        }
     }

     for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            arr2[i][j] = arr[j][i];
            printf("Element [%d][%d] after transpose is %d\n", i,j,arr2[i][j]);
        }
     }

    }