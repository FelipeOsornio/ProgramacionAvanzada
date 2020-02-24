//
// Created by Felipe Osornio on 2019-09-24.
//

#include <stdio.h>
#define LIMIT_BITS 32

int main() {
    int number, count = 0;

    scanf("%i", &number);

    for (int i = 0; i < LIMIT_BITS; i++) {
        if ((number & 1) == 1) count+= 1;
        number >>= 1;
    }

    printf("%i", count);
    return 0;
}
