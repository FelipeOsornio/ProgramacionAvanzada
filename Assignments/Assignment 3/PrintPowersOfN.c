//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>
#include <math.h>

int main() {
    int base;
    int limit;

    scanf("%i", &base);
    scanf("%i", &limit);

    for (int looper = 0; looper <= limit; ++looper) {
        printf("%i ", (int) pow(base, looper));
    }

    return 0;
}

