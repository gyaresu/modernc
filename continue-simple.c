// broken
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int magic = 42;
    int count = 6;

    for (size_t i = 0; i <= magic; ++i) {
        if (i != magic) {
            printf("i is: %zu ", i);
            continue;
        }
        printf("\nBoom! Magic number is %zu\n",i);
        puts("test\n");
    }
    switch (count) {
        default:
            puts("++++ ..... +++");
        case 4:
            puts("++++");
        case 3: 
            puts("+++");
        case 2: 
            puts("++");
        case 1: 
            puts("+");
        case 0:;
    }
}
