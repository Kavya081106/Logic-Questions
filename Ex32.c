#include <stdio.h>
#include <string.h>

void main() {
    char s1[100],s2[100],flag;
    printf("Enter string 1: ");
    scanf("%s", s1);
    int arr1[strlen(s1)];
    printf("Enter string 2: ");
    scanf("%s", s2);
    int arr2[strlen(s2)];

    if(strlen(s1)!=strlen(s2)){
        printf("Given strings are not equal");
        return;
    }else{
        for(int i=0;i<strlen(s1);i++){
            arr1[i] = s1[i];
        }

        for(int j=0;j<strlen(s2);j++){
            arr2[j] = s2[j];
        }

        for(int i=0;i<strlen(s1);i++){
            for(int j=i+1;j<strlen(s2);j++){
                if(arr1[i]>arr1[j]){
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }

                if(arr2[i]>arr2[j]){
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }

        for(int i=0;i<strlen(s1);i++){
            for(int j=0;j<strlen(s2);j++){
                if(arr1[i]==arr2[j]){
                    flag = 0;
                }else{
                    flag = 1;
                }
            }
        }

    }

    if(flag==0){
        printf("Given strings are anagrams");
    }



    
}
