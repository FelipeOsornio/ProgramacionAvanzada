//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>

void printSquare(int min, int max) {
    for (int i = min; i <= max; i++) {
        for (int j = i; j <= max; j++)
            printf("%i", j);
        for (int j = min; j < i; j++)
            printf("%i", j);
        printf("\n");
    }
}

int main() {
    int min;
    int max;

    scanf("%i", &min);
    scanf("%i", &max);

    printSquare(min, max);

    return 0;
}