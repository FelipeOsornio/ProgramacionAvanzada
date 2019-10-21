//
// Created by Felipe Osornio on 2019-09-24.
//

#include "stdio.h"
#define MAX_ARRAY_SIZE 1000

void computeMax(int *array) {
    int max = array[0], size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }

    printf("%i", max);
}

int main(void) {
    int size;
    scanf("%d", &size);

    int h[MAX_ARRAY_SIZE] = ;
    for (int i = 0; i < size; i++) {
        scanf("%i", &h[i]);
    }

    computeMax(h);

    return 0;
}
