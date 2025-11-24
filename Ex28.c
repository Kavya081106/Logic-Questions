#include <stdio.h>
#include <ctype.h>

// Write a program that should decode the given pattern and print the resulting expanded string. 
// Input: 2a3bc4dE5F2G7H 
// Output: aabbbcddddEFFFFFGGHHHHHHH 


int main() {
    char str[100];
    printf("Enter the input: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            int count = str[i] - '0'; // convert digit char to number
            char ch = str[i + 1];     // next character
            for (int j = 0; j < count; j++)
                printf("%c", ch);
            i++; // skip that character
        } else if (isalpha(str[i])) {
            printf("%c", str[i]);
        }
    }

    return 0;
}
