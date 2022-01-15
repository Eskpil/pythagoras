#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define TRIES       25000
#define RESET       "\033[0m"
#define BOLDMAGENTA "\033[1m\033[35m" 

#define u64 unsigned long long int

u64 upow(u64 n, u64 e) {
    if (e == 0) return (u64)(1);

    u64 base = n;
    u64 acc = 1;

    while (e > 1) {
        if ((e & 1) == 1) acc *= base;
        base *= base;
        e /= 2;
    }

    return (acc * base);
}

int main(void) {
    u64 answers = 0;

    for (u64 n = 1; n <= TRIES; n++) {
        for (u64 m = n + 1; m <= TRIES; m++) {
            u64 a = 2 * m * n;
            u64 b = upow(m, 2) - upow(n, 2);
            u64 c = upow(m, 2) + upow(n, 2);

            answers += 1;
            
//            printf("a: %llu, b: %llu, " BOLDMAGENTA "c: %llu " RESET "\n", a, b, c);

        }
    }

    printf("\nAnswers: " BOLDMAGENTA "%llu" RESET "\n", answers);
   
    return 0;
}


