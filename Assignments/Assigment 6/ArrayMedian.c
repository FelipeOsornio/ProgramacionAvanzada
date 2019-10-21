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

void computeMedina(int array[], int size) {
    int* sortArray = bubbleSort(array, size);
    int half = size / 2;

    size % 2 == 0 ? printf("%.1f", (sortArray[half-1] + sortArray[half]) / 2.0) : printf("%i", sortArray[half]);
}

int main() {
    int size;
    scanf("%i", &size);

    int array[MAX_SIZE];
    for (int i = 0; i < size; i++)
        scanf("%i", &array[i]);

    computeMedina(array, size);
    return 0;
}
