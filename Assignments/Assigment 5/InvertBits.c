//
// Created by Felipe Osornio on 2019-09-17.
//

#include <stdio.h>
#define MAX_BITS 32

int invertBit(int number, int begin, int extension) {
    int final = 0, mask = 1, extCounter = 0;

    for (int i = 0; i < MAX_BITS; i++) {
        if (i < begin) {
            final += number & mask;
        } else if (extCounter < extension) {
            final += (number & mask) ^ mask;
            extCounter++;
        } else {
            final += number & mask;
        }
        mask <<= 1;
    }

    return final;
}

int main() {
    int x, p, n;

    scanf("%i", &x);
    scanf("%i", &p);
    scanf("%i", &n);

    printf("%i", invertBit(x, p, n));

    return 0;
}
