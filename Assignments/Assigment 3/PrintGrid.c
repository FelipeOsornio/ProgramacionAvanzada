//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>

void printGrid(int rows, int cols) {
    int counterRows = 1;
    int counterCols = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            j == cols - 1 ? printf("%i", counterRows) : printf("%i, ", counterRows);
            counterRows += rows;
        }
        printf("\n");
        counterRows = counterCols += 1;
    }
}

int main() {
    int rows;
    int cols;

    scanf("%i", &rows);
    scanf("%i", &cols);

    printGrid(rows, cols);

    return 0;
}
