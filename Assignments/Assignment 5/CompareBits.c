//
// Created by Felipe Osornio on 2019-09-17.
//

#include <stdio.h>
#define LIMIT_BITS 32

int countOne(int number) {
    int count = 0;

    for (int i = 0; i < LIMIT_BITS; i++) {
        if ((number & 1) == 1) count+= 1;
        number >>= 1;
    }

    return count;
}

int cmp_bits(int n1, int n2) {
    int a = countOne(n1);
    int b = countOne(n2);

    return a < b ? -1 : a > b ? 1 : 0;
}

int main() {
    int a, b;

    scanf("%i", &a);
    scanf("%i", &b);

    printf("%i", cmp_bits(a, b));

    return 0;
}
