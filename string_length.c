#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Counting characters until null character */
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of string = %d", length);

    return 0;
}

