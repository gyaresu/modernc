#include <tgmath.h>
#include <stdio.h>

int main(void) {

    double const a = 34.0;
    double x = 0.5;
    double const eps = 1E-9;

    for (size_t i=0; i < 20; ++i) {
        if (x>1.0){ //checkifweareonthecorrectsideof1
            x = 1.0/x; continue;
        }
        double prod = a*x;
        if (fabs(1.0 - prod) < eps)    // Stop if close enough
            break;
        x *= (2.0 - prod);             // Heron approximation
    }
    printf("%f\n", x);
}
