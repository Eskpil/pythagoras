#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define TRIES 1000

int main(void) {
    for (int x = 0; x < TRIES; ++x) {
        for (int y = 0; y < TRIES; ++y) {

            if (x != 0) { 
                if (y != 0) {
                    int a = pow(x, 2); 
                    int b = pow(y, 2);
                    int c_squared = a + b;
                    float c_length = sqrtf((float) c_squared);
                    if (rintf(c_length) == c_length) {
                        printf("a: %d, b: %d, c_squared: %d, c_length: %.12f\n", a, b, c_squared, c_length);
                    }
                }
            }
        } 
    }

    return 0;
}
