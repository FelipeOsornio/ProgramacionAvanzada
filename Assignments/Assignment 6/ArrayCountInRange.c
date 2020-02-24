//
// Created by Felipe Osornio on 2019-10-08.
//

#include "stdio.h"
#define MAX_SIZE 1000

int countInRange(int array[], int size, int lowNumber, int highNumber) {
    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] >= lowNumber && array[i] <= highNumber)
            counter++;
    }

    return counter;
}

int main() {
    int lowNumber, highNumber, size;

    scanf("%i", &lowNumber);
    scanf("%i", &highNumber);
    scanf("%i", &size);

    int array[MAX_SIZE];
    for (int i = 0; i < size; i++)
        scanf("%i", &array[i]);

    printf("%i", countInRange(array, size, lowNumber, highNumber));

    return 0;
}