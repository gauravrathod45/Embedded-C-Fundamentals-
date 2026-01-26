#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a = %d, b = %d\n", a, b);

    /* Bitwise AND */
    printf("a & b = %d\n", a & b);

    /* Bitwise OR */
    printf("a | b = %d\n", a | b);

    /* Bitwise XOR */
    printf("a ^ b = %d\n", a ^ b);

    /* Bitwise left shift */
    printf("a << 1 = %d\n", a << 1);

    /* Bitwise right shift */
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}
