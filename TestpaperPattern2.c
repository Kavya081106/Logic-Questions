#include <stdio.h>
#include <ctype.h>

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
            // print single letter (no digit before it)
            printf("%c", str[i]);
        }
    }

    return 0;
}
