// Happy number(A happy number is a number that eventually reaches 1
//  when you repeatedly replace it with the sum of the squares of its digits.)

//try using array

#include <stdio.h>

int Sumofn(int n){
    int sum = 0;
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
        printf("Happy number");
    }else{
        printf("Not Happy number");
    }
}