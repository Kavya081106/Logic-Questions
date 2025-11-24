//Write a program to check whether number is Happy number or not.  
// A happy number are those number whose digit’s square summation eventually reaches to 1, if the 
// sequence start repeating then it is not a happy number.   
// E.g., 49 is a happy number whose sequence is 49 97 130 10 1. 
// E.g., 50 is not a happy number whose sequence is 50 25 29 85 89 145 42 20 4 16 37 58 89 it should stop 
// when 89 is detected 2nd time and print 50 is not a happy number.  
#include <stdio.h>

int Sumofn(int n){
    int sum=0;
    while(n!=0){
        int rem = n%10;
        sum = sum+(rem*rem);
        n = n/10;
    }

    return sum;
}

int isHappy(int n){
    int slow = n;
    int fast = n;

    do{
        slow = Sumofn(slow);
        fast = Sumofn(Sumofn(fast));
    }while(slow!=fast);

    return slow==1;
}

void main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    if(isHappy(n)==1){
        printf("%d is Happy", n);
    }else{
        printf("%d is not Happy",n);
    }
}
