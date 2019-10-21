//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>
#include <stdlib.h>

int largerAbsVal(int a, int b) {
    return abs(a) > abs(b) ? abs(a) : abs(b);
}

int main() {
    int numberA;
    int numberB;

    scanf("%i", &numberA);
    scanf("%i", &numberB);

    printf("%i", largerAbsVal(numberA, numberB));

    return 0;
}
