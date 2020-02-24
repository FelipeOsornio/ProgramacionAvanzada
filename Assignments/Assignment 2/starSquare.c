//
// Created by Felipe Osornio on 2019-08-27.
//

#include <stdio.h>
#include <string.h>

int main() {

    int row_count = 4, col_count = 5;
    char graphic[120] = "";

    for (int looper = 1; looper <= col_count * row_count; ++looper) {
        if (looper % col_count == 0) {
            strcat(graphic, "u\n");
        } else {
            strcat(graphic, "u");
        }
    }

    printf("%s", graphic);

    return 0;
}

