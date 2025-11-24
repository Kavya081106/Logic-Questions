// Take an Input in the form of Binary String that contains only 0’s and 1’s and convert this number into 
// integer.  
// Input: 101.110 
// Output: 5.75 

#include <stdio.h>
#include <math.h>

void main(){
    int size,index,index2=0;
    float sum=0.0;
    
    printf("Enter size of string:");
    scanf("%d", &size);
    int arr[size];
    char str[100];

    printf("Enter string:");
    scanf("%s", &str);

    for(int i=0;i<size;i++){
        arr[i] = str[i];
    }

    for(int i=0;i<size;i++){
        if(arr[i]=='.'){
            index=i;
            break;
        }
    }
    index2 = 0;
    for(int i=index-1;i>=0;i--){
            sum = sum+ ((arr[i]-'0')*pow(2,index2));
            index2++;
    } 
    int index3 = -1;
    for(int i=index+1;i<size;i++){
        sum = sum+ ((arr[i]-'0')*pow(2,index3));
        index3--;
    }

    printf("Sum is %f", sum);
}