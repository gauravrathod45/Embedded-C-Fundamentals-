#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    /* Taking input using array */
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");

    /* Displaying array elements */
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
