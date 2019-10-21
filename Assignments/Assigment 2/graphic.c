//
// Created by Felipe Osornio on 2019-08-26.
//

#include <stdio.h>
#include <string.h>

int main() {

    int row_count, col_count;
    char rectangle[120] = "";

    printf("Filas: ");
    scanf("%d", &row_count);

    printf("Columnas: ");
    scanf("%d", &col_count);

    for (int looper = 1; looper <= col_count * row_count; ++looper) {
        if (looper % col_count == 0) {
            strcat(rectangle, "*\n");
        } else {
            strcat(rectangle, "*");
        }
    }

    printf("Gráfico: \n%s", rectangle);

    return 0;
}

