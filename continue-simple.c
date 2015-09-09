// broken
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int magic = 42;

    for (size_t i = 0; i <= magic; ++i) {
        if (i != magic) {
            printf("i is: %zu ", i);
            continue;
        }
        printf("\nBoom! Magic number is %zu",i);
    }
}
