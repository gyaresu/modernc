#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int hun = 0;
    int inc = 2;
    while (1) {
        if (hun > 100) {
            break;
        }
        printf("%i ", hun);
        hun += inc;
    }
}
