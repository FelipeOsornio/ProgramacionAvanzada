//
// Created by Felipe Osornio on 2019-09-24.
//

#include "stdio.h"
#define MAX_ARRAY_SIZE 1000

unsigned int computeMode(unsigned int array[], int size) {
    unsigned int max = 0, counter = 0, maxCounter = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            if (array[i] == array[j]) counter++;

        if (counter > maxCounter) {
            maxCounter = counter;
            max = array[i];
        }

        counter = 0;
    }

    return max;
}

int main(void) {
    unsigned int size;
    scanf("%u", &size);

    unsigned int h[MAX_ARRAY_SIZE];
    for (int i = 0; i < size; i++)
        scanf("%u", &h[i]);

    printf("%u", computeMode(h, size));

    return 0;
}
