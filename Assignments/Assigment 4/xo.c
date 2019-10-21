//
// Created by Felipe Osornio on 2019-09-12.
//

#include <stdio.h>

void xo(int times) {
    for (int i = 0; i < times; i++) {
        for (int j = 0, k = times - 1; j < times; j++, k--) {
            if (j % times == i || k % times == i) {
                printf("x");
            } else {
                printf("o");
            }
        }
        printf("\n");
    }
}

int main() {
    int times;
    scanf("%i", &times);

    xo(times);

    return 0;
}