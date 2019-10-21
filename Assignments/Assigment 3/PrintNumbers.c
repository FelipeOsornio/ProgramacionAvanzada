//
// Created by Felipe Osornio on 2019-09-09.
//

#include <stdio.h>

int main() {
    int limit;
    scanf("%i", &limit);

    for (int looper = 1; looper <= limit; ++looper) {
        printf("[%i] ", looper);
    }

    return 0;
}
