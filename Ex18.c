#include <stdio.h>

void main(){
    int nums1,nums2,index=0;

    printf("Enter size of array 1:");
    scanf("%d", &nums1);
    int arr1[nums1];

    printf("Enter array 1 elements:\n");
    for(int i=0;i<nums1;i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array 2:");
    scanf("%d", &nums2);
    int arr2[nums2];

    int min = (nums1<nums2)?nums1:nums2;
    int arr3[min];

    printf("Enter array 2 elements:\n");
    for(int i=0;i<nums2;i++){
        scanf("%d", &arr2[i]);
    }

    for(int i=0;i<nums1;i++){
        for(int j=0;j<nums2;j++){
            if(arr1[i]==arr2[j]){
                arr3[index] = arr1[i];
                index++;
                arr2[j] = -9999;  
                break;
            }
        }
    }

    for(int i=0;i<index-1;i++){
        for(int j=i+1;j<index;j++){
            if(arr3[i]>arr3[j]){
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    for(int i=0;i<index;i++){
        printf("%d ", arr3[i]);
    }
}
