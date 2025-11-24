//  Write a program to find the frequency of each element in 
// an array. 

#include <stdio.h>

void main(){
    int size;

    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size],index=0,count=1,freq[size];

    printf("Enter array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size-1;i++){
        count=1;
        if(arr[i]!=-9999){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count = count+1;
                arr[j]=-9999;
            }
        }
        freq[index] = count;
        index++;
    }
    
}

index=0;

for(int i=0;i<size;i++){
    if(arr[i]!=-9999){
        printf("Frequency of %d is %d\n", arr[i], freq[index]);
        index++;
    }
}
}