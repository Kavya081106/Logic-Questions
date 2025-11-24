#include <stdio.h>

void main(){
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

int n,count;
printf("Enter number:");
scanf("%d", &n);

for(int i=1;i<=n;i++){
  for(int k=1;k<=n-i;k++){
    printf(" ");
  }
  count=i;
  for(int j=1;j<=i;j++){
    printf("%d", count);
    count++;
  }
  count=count-2;        //if n=3  last count value will be 6
  for(int j=i;j>1;j--){
    printf("%d", count);
    count--;
  }
    printf("\n");
}


}



