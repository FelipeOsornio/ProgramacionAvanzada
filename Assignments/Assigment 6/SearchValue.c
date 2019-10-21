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

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

void searchValue(int sortArray[], int size, int numberToFind) {
    printf("%i", binarySearch(sortArray, 0, size - 1, numberToFind));
}

int main() {
    int size, numberToFind;

    scanf("%i", &size);
    scanf("%i", &numberToFind);

    int array[MAX_SIZE];
    for (int i = 0; i < size; i++)
        scanf("%i", &array[i]);

    int* sortArray = bubbleSort(array, size);
    searchValue(sortArray, size, numberToFind);

    return 0;
}