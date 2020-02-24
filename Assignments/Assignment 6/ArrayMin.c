//
// Created by Felipe Osornio on 2019-10-08.
//

#include "stdio.h"
#define MAX_ARRAY_SIZE 1000

int computeMin(int *array, int size) {
    int min = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < min)
            min = array[i];
    }

    return min;
}

int main(void) {
    int size;
    scanf("%d", &size);

    int h[MAX_ARRAY_SIZE];
    for (int i = 0; i < size; i++) {
        scanf("%i", &h[i]);
    }

    printf("%i", computeMax(h, size));

    return 0;
}