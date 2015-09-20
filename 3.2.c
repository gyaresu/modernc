#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 10;
    for (size_t i = 1; i < x; ++i) {
        if (x % i) {
            printf("Remainder: %lu\n", x % i);
            continue;
        }
        printf("i is: %lu\n", i);
        printf("390MHz short is: %g\n", 390000000.0);
    }
}
