//
// Created by Felipe Osornio on 2019-09-03.
//

#include "stdio.h"

int min(int numA, int numB, int numC) {
    int smallest = 0;

    if (numA < numB && numA < numC) {
        smallest = numA;
    } else {
        if (numB < numA && numB < numC) {
            smallest = numB;
        } else {
            smallest = numC;
        }
    }

    return smallest;
}

int main() {

    int numA, numB, numC;

    scanf("%d", &numA);
    scanf("%d", &numB);
    scanf("%d", &numC);

    printf("%d", min(numA, numB, numC));

    return 0;
}

