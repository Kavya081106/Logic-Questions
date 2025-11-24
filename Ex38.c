// Write a Function that returns either 1 or 0 based on following condition if the array is in ascending order 
// and occurrence of that number at least 3 then it should return 1 otherwise it should return 0.  
// e.g. if A=[1,1,1,2,2] it should return 0, if A= [1,1,1,3,3,3,3] it should return 1. 

#include <stdio.h>

int AscendingArray(int size,int arr[]){
    int count=1,index=0,freq[size],flag = 1;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                printf("Invalid. Array should be in ascending order\n");
                return 0;
            }
        }
    }

    for(int i=0;i<size-1;i++){
        count=1;
        if(arr[i]!=-9999){
            for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count = count+1;
                arr[j] = -9999;
            }
        }
        freq[index] = count;
        index++;
        }
    }

    for(int index=0;index<size;index++){
        if(freq[index]<3){
            flag=0;
            break;
        }else{
            flag=1;
        }
    }

    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }
}

void main(){
    int size;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", AscendingArray(size, arr));




}