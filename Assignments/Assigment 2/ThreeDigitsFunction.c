//
// Created by Felipe Osornio on 2019-08-27.
//

#include <stdio.h>

int main() {

    int number;

    printf("");
    scanf(" %d", &number);

    int remainder = number % 1000;
    printf("%d", remainder);

    return 0;
}
