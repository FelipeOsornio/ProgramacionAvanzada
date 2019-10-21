//
// Created by Felipe Osornio on 2019-10-08.
//

#include <stdio.h>
#define MAX_SIZE 1000

int* bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return array;
}

int main() {
    int size;
    scanf("%i", &size);

    int array[MAX_SIZE];
    for (int i = 0; i < size; i++)
        scanf("%i", &array[i]);

    int* sortArray = bubbleSort(array, size);

    for (int j = 0; j < size; j++)
        printf("%i\n", sortArray[j]);

    return 0;
}