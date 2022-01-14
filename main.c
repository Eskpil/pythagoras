#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define TRIES       40000
#define RESET       "\033[0m"
#define BOLDMAGENTA "\033[1m\033[35m" 

int main2(void) {
   
    int counter = 0;

    for (int i = 0; i < TRIES; ++i) {
        if ((i % 2) == 0) {
            counter += 1; 
        }
    }

    assert(counter == TRIES / 2 && "counter does not have expected value");
    printf("%d\n", counter);

    return 0;
}

int main(void) {

    int counter = 0;

    for (int x = 0; x < TRIES; ++x) {
        for (int y = 0; y < TRIES; ++y) {
            if (x != 0) { 
                if (y != 0) {
                    int a = pow(x, 2); 
                    int b = pow(y, 2);
                    int c_squared = a + b;
                    double c_length = sqrt((double) c_squared);
                    if (rint(c_length) == c_length) {
                        counter += 1;
                        printf("a: %d, b: %d, " BOLDMAGENTA "c: %.12lf " RESET "\n", x, y, c_length);
                    }
                }
            }
        } 
    }
    
    printf("%d\n", counter);

    return 0;
}
