#include <stdio.h>

int main() {
    int i;

    /* for loop */
    printf("For loop output:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n");

    /* while loop */
    printf("While loop output:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    /* do-while loop */
    printf("Do-while loop output:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}
