//
// Created by Felipe Osornio on 2019-09-03.
//

#include <stdio.h>

void printStrings(char *value, int times) {
    for (int looper = 0; looper < times; ++looper) {
        printf("%s", value);
    }
}

int main() {

    int times;
    scanf("%d", &times);

    char value[200] = "";
    scanf("\n%[^\n]s", value);

    printStrings(value, times);

    return 0;
}

